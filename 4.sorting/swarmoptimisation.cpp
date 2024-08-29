#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

double objective_function(double x, double y) {
    return (x * x + y * y);
}

// Define the PSO algorithm
pair<pair<double, double>, double> pso(int num_particles, int max_iter, double x_min, double x_max, double y_min, double y_max) {
    // Initialize particles and velocities
    vector<pair<double, double>> particles(num_particles);
    vector<pair<double, double>> velocities(num_particles);
    for (int i = 0; i < num_particles; i++) {
        particles[i] = make_pair((x_max - x_min) * ((double)rand() / RAND_MAX) + x_min,
                                 (y_max - y_min) * ((double)rand() / RAND_MAX) + y_min);
        velocities[i] = make_pair((double)rand() / RAND_MAX * 2 - 1,
                                  (double)rand() / RAND_MAX * 2 - 1);
    }

  
    vector<pair<double, double>> best_positions = particles;
    vector<double> best_values(num_particles);
    for (int i = 0; i < num_particles; i++) {
        best_values[i] = objective_function(best_positions[i].first, best_positions[i].second);
    }
    pair<double, double> global_best_position = best_positions[0];
    double global_best_value = best_values[0];
    for (int i = 1; i < num_particles; i++) {
        if (best_values[i] < global_best_value) {
            global_best_position = best_positions[i];
            global_best_value = best_values[i];
        }
    }

    double c1 = 2;  // Cognitive coefficient
    double c2 = 2;  // Social coefficient
    double w = 0.9; // Inertia weight

    // Iterate through generations
    for (int iter = 0; iter < max_iter; iter++) {
        for (int i = 0; i < num_particles; i++) {
            // Update velocity and position
            double r1 = (double)rand() / RAND_MAX;
            double r2 = (double)rand() / RAND_MAX;
            velocities[i].first = w * velocities[i].first +
                                  c1 * r1 * (best_positions[i].first - particles[i].first) +
                                  c2 * r2 * (global_best_position.first - particles[i].first);
            velocities[i].second = w * velocities[i].second +
                                   c1 * r1 * (best_positions[i].second - particles[i].second) +
                                   c2 * r2 * (global_best_position.second - particles[i].second);
            particles[i].first += velocities[i].first;
            particles[i].second += velocities[i].second;

            // Update best positions
            double curr_value = objective_function(particles[i].first, particles[i].second);
            if (curr_value < best_values[i]) {
                best_positions[i] = particles[i];
                best_values[i] = curr_value;
                if (curr_value < global_best_value) {
                    global_best_position = particles[i];
                    global_best_value = curr_value;
                }
            }
        }
    }

    return make_pair(global_best_position, global_best_value);
}

int main() {
    srand(time(NULL));

    int num_particles = 50;
    int max_iter = 100;
    double x_min = -10, x_max = 10;
    double y_min = -10, y_max = 10;

    pair<pair<double, double>, double> result = pso(num_particles, max_iter, x_min, x_max, y_min, y_max);
    cout << "Best position: (" << result.first.first << ", " << result.first.second << ")" << endl;
    cout << "Best value: " << result.second << endl;

    return 0;
}