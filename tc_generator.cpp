// Aditya_Chandra
#include <bits/stdc++.h>
using namespace std;

void create_input_files(int total_testcases) {
    for (int i = 0; i < total_testcases; i++) {
        fstream file;
        string filename = "input";
        filename += (i < 10 ? "0" + to_string(i) : to_string(i)) + ".txt";
        file.open("input/" + filename, ios::out);

        if (!file) {
            cout << "Error in creating input " << filename << endl;
        } else {
            cout << filename + " created successfully!" << endl;
        }

        file.close();
    }
}

void create_output_files(int total_testcases) {
    for (int i = 0; i < total_testcases; i++) {
        fstream file;
        string filename = "output";
        filename += (i < 10 ? "0" + to_string(i) : to_string(i)) + ".txt";
        file.open("output/" + filename, ios::out);

        if (!file) {
            cout << "Error in creating output " << filename << endl;
        } else {
            cout << filename + " created successfully!" << endl;
        }

        file.close();
    }
}

void populate(int total_testcases) {
    for (int f_i = 0; f_i < total_testcases; f_i++) {
        cout << "input" << f_i << endl;

        /*-------------------------------------------------------------*/
        // Enter the input format for the problem;

        int n;
        cin >> n;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        /*--------------------------------------------------------------*/

        string input_filename = "input";
        input_filename += (f_i < 10 ? "0" + to_string(f_i) : to_string(f_i)) + ".txt";
        ofstream ipf("input/" + input_filename);

        // Writing the input to a file
        ipf << n << endl;
        for (auto x : v) {
            ipf << x << " ";
        }
        ipf << endl;
        ipf.close();

        string output_filename = "output";
        output_filename += (f_i < 10 ? "0" + to_string(f_i) : to_string(f_i)) + ".txt";
        ofstream opf("output/" + output_filename);


        /*------------------------------------------------------------------*/
        // Paste the Solution snippet for the problem 

        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += v[i];
        }

        // Writing to output file
        opf << sum << endl;
        opf.close();

        /*--------------------------------------------------------------------*/
    }
}

int main() {
    cout << "Enter the number of tests to be generated" << endl;
    int n;
    cin >> n;
    create_input_files(n);
    create_output_files(n);
    populate(n);
}