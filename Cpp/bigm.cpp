// Big M method to solve linear equations

#include <bits/stdc++.h>
using namespace std;
int main()
{
      int n; // number of variables
      cout << "Enter number of Variables : ";
      cin >> n;
      double objective_function_coefficient[101]; // coefficient of objective function
      cout << "Enter Coefficient of x in objective function :\n";
      for (int i = 1; i <= n; i++)
      {
            cin >> objective_function_coefficient[i];
      }
      for (int i = n + 1; i <= 100; i++) // allocating 0 coefficient to slack and sulprus variables in objective function
            objective_function_coefficient[i] = 0;
      int flag; // Flag variable indicating we need to maximize objective function or minimize the objective function
      cout << "\n'1' : to maximize\n'0' : to minimize\n Enter : ";
      cin >> flag;
      double sign = 1.0;
      if (flag == 0)
            sign = -1.00;

      // minimizing objective function = maximizing -(objective function)
      if (flag == 0)
      {
            for (int i = 1; i <= n; i++)
                  objective_function_coefficient[i] *= sign;
      }
      int m; // number of equations
      cout << "Enter number of equations : ";
      cin >> m;
      int counter = n + m;
      double coefficient[m + 1][101];
      double b[m + 1];
      double ma = 1000000.00;
      double ans = 0.0;
      int basis_index[m + 1];
      for (int i = 1; i <= m; i++)
      {
            for (int j = 1; j <= n; j++)
            {
                  cout << "ENTER COEFFICIENT OF x" << j << " IN " << i << "TH EQUATION:- ";
                  cin >> coefficient[i][j];
            }
            for (int j = n + 1; j <= 100; j++)
                  coefficient[i][j] = 0.0;
            cout << "ENTER <= OR >= OR = SIGN IN " << i << "TH EQUATION:- ";
            string s;
            cin >> s;
            if (s[0] == '>')
            {
                  coefficient[i][n + i] = -1.0;
                  counter++;
                  coefficient[i][counter] = 1.0;
                  objective_function_coefficient[counter] = -ma;
                  basis_index[i] = counter;
            }
            else if (s[0] == '<')
            {
                  coefficient[i][n + i] = 1.0;
                  basis_index[i] = n + i;
            }
            else if (s[0] == '=')
            {
                  coefficient[i][n + i] = 0;
                  counter++;
                  coefficient[i][counter] = 1.0;
                  objective_function_coefficient[counter] = -ma;
                  basis_index[i] = counter;
            }
            cout << "ENTER CONSTANT TERM OF " << i << "th EQUATION ON RHS:- "
                 << " ";
            cin >> b[i];
            ans += objective_function_coefficient[basis_index[i]] * b[i];
      }
      cout << "\n";
      cout << fixed << setprecision(4);
      // calculating  zi for all the variables
      double z[counter + 1];
      int it = 1;
      double basic_variables[101][m + 1][2]; // Stores information about basic variables and minimum ratio each iteration
      double updated_ans[101];
      double non_basic_variables[101][counter + 1 - m][2];
      updated_ans[0] = ans;
      double updated_z[101][counter + 1];
      double updated_coefficient[101][m + 1][counter + 2];
      int check = 1;
      while (1)
      {
            for (int i = 1; i <= counter; i++)
            {
                  z[i] = 0;
                  for (int j = 1; j <= m; j++)
                        z[i] += coefficient[j][i] * objective_function_coefficient[basis_index[j]];
                  // cout<<"z"<<i<<" - c"<<i<<" = "<<(z[i]-objective_function_coefficient[i])<<"\n";
            }
            vector<bool> vis(counter + 1, false);
            for (int i = 1; i <= m; i++)
            {
                  vis[basis_index[i]] = true;
                  basic_variables[it][i][0] = basis_index[i]; // Basic variable index
                  basic_variables[it][i][1] = b[i];           // Stores minimum ratio for that particular basic variable
            }
            int h = 1;
            for (int i = 1; i <= counter; i++)
            {
                  if (vis[i] == true)
                        continue;
                  non_basic_variables[it][h][0] = i;                                        // Non-Basic variable index
                  non_basic_variables[it][h][1] = z[i] - objective_function_coefficient[i]; // Stores minimum ratio for that particular basic variable
                  h++;
            }
            for (int i = 1; i <= m; i++)
            {
                  for (int j = 1; j <= counter; j++)
                  {
                        updated_coefficient[it][i][j] = coefficient[i][j];
                  }
                  updated_coefficient[it][i][counter + 1] = b[i];
            }
            int position = 1;
            for (int i = 1; i <= counter; i++)
            {
                  // cout<<"z"<<i<<" - c"<<i<<" = "<<(z[i]-objective_function_coefficient[i])<<"\n";
                  updated_z[it][i] = z[i] - objective_function_coefficient[i];
                  if (z[i] - objective_function_coefficient[i] < z[position] - objective_function_coefficient[position])
                        position = i;
            }
            if (z[position] - objective_function_coefficient[position] >= -0.001)
            {
                  break;
            }
            else
            {
                  int pos1 = 0;
                  for (int i = 1; i <= m; i++)
                  {
                        if (coefficient[i][position] != 0)
                        {
                              if (pos1 == 0 && b[i] / coefficient[i][position] >= 0.0)
                              {
                                    pos1 = i;
                              }
                              else if (b[i] / coefficient[i][position] < b[pos1] / coefficient[pos1][position] && b[i] / coefficient[i][position] >= 0.0)
                              {
                                    pos1 = i;
                              }
                        }
                  }
                  if (pos1 == 0)
                  {
                        check = 0;
                        break;
                  }
                  basis_index[pos1] = position;
                  double val = coefficient[pos1][position];
                  for (int i = 1; i <= counter; i++)
                  { // Making coeff of xpos 1 in pos1 th equation
                        coefficient[pos1][i] /= val;
                  }
                  b[pos1] /= val;
                  for (int i = 1; i <= m; i++)
                  { // Making coeff of xpos 0 in all other equation
                        val = coefficient[i][position];
                        for (int j = 1; j <= counter && i != pos1; j++)
                        {
                              coefficient[i][j] -= val * coefficient[pos1][j];
                        }
                        if (i != pos1)
                              b[i] -= val * b[pos1];
                  }
                  val = 0;
                  for (int i = 1; i <= m; i++)
                  {
                        val += objective_function_coefficient[basis_index[i]] * b[i];
                  }
                  ans = max(ans, val);
                  updated_ans[it] = val;
                  it++;
            }
      }
      cout << "NUMBER OF ITERATIONS FOR THE PROCESS IS:- " << it << "\n\n";
      for (int it1 = 1; it1 <= it; it1++)
      {
            cout << "SIMPLEX TABLEAU FOR ITERATION " << it1 << " IS AS FOLLOWS:-\n\n";
            cout << "\t\tCoefficient in Z\t";
            for (int i = 1; i <= counter; i++)
            {
                  if (objective_function_coefficient[i] >= 0.0)
                        cout << " ";
                  cout << objective_function_coefficient[i] << "\t\t";
            }
            cout << "\n";
            cout << "\t Cb\t\t Basis\t\t";
            for (int i = 1; i <= counter; i++)
                  cout << " x" << i << "\t\t";
            cout << " RHS\n";
            for (int j = 1; j <= m; j++)
            {
                  cout << "\t";
                  if (objective_function_coefficient[(int)basic_variables[it1][j][0]] >= 0.0 && objective_function_coefficient[(int)basic_variables[it1][j][0]] < 10.0)
                        cout << " ";
                  cout << objective_function_coefficient[(int)basic_variables[it1][j][0]] << "\t\t"
                       << "x" << (int)basic_variables[it1][j][0] << "\t\t";
                  for (int i = 1; i <= counter + 1; i++)
                  {
                        if (updated_coefficient[it1][j][i] >= 0.0)
                              cout << " ";
                        cout << updated_coefficient[it1][j][i] << "\t\t";
                  }
                  cout << "\n";
            }
            cout << "\t\t\tzj-cj\t\t";
            for (int i = 1; i <= counter; i++)
            {
                  if (updated_z[it1][i] >= 0.0)
                        cout << " ";
                  cout << updated_z[it1][i] << "\t\t";
            }
            cout << updated_ans[it1 - 1] << "\n";
            cout << "\n";
      }
      for (int j = 1; j <= m; j++)
      {
            int position = basic_variables[it][j][0];
            if (position > n + m && basic_variables[it][j][1] != 0.0000)
                  check = -1;
      }
      if (check == 1)
      {
            cout << "OPTIMAL VALUE OCCURS AT:- \n";
            double solution[n + 1];
            for (int j = 1; j <= n; j++)
                  solution[j] = 0.0;
            for (int j = 1; j <= m; j++)
            {
                  int pos = basic_variables[it][j][0];
                  if (pos <= n)
                        solution[pos] = basic_variables[it][j][1];
            }
            for (int i = 1; i <= n; i++)
            {
                  cout << "x" << i << " = " << solution[i];
                  if (i < n)
                        cout << " , ";
            }
            cout << "\n\n";
            cout << "OPTIMAL VALUE IS = " << (ans * sign) << '\n';
      }
      else if (check == 0)
      {
            cout << "OPTIMAL VALUE IS UNBOUNDED!!\n";
            cout << "\n";
      }
      else
      {
            cout << "INFEASIBLE AS ARTIFICIAL VARIABLES ARE NOT ZERO!!\nSOLUTION DOES NOT EXIST!!\n";
      }
      return 0;
}