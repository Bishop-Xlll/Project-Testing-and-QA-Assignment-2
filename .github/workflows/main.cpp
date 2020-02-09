
#include <iostream>

using namespace std;
double BM ();
int retire();

int main ()
{
  char ans;
  do
    {
      cout << "Hello select one of the followingg options\n";
      cout << "A. BMI\nB. Retirement\nC. Exit\n";
      cin >> ans;
        

          switch (ans)
    	{
        	case 'A':
        	case 'a': BM ();
        	  break;
        	case 'B':
        	case 'b':retire();
        	  break;
        	case 'C':
        	case 'c':  cout<<"Goodbye";
        	  break;
        	default:
        	  cout<<"ivalid, please try again";
    	};
      

    }
  while (ans != 'C' &&  ans!='c');

}


int retire()
{
    int age;
    int salary;
    float saved;
    int ss;
    int Employer;
    int goal;
    int age1;
    int total;
    cout << "== Retirement Savings Calculator ==" << endl;
    cout << "Note: this calculator rounds to the nearest dollar" << endl;

    cout << "Step 1: Enter age" << endl;
      cin >> age;
      if (age>=100)
      {
          cout<<"wait a moment...you are dead..come back when you are alive and working\n";
          return 0;
      }
      else if (age<0)
      {
         cout<<"wait a moment...you are not not alive..come back when you are alive and working\n";
          return 0; 
      }

    cout << "Step 2: Enter annual salary" << endl;
      cin >> salary;

    cout << "Step 3: Enter percentt of salary annually saved" << endl;
      cin >> saved;

    cout << "Step 4: Enter retirement goal" << endl;
      cin >> goal;

;
    ss= (saved / 100) * salary;
    Employer = int(ss * 0.35);
    total = int(Employer + ss);
    age1 = goal/total;

    if (age1<100)
    {
        cout<<"you will reach your goal at age: "<< age+age1<<endl;
    }
    else 
        {
         cout<<"sorry..at this rate you will die before you meet your savings goal\n";
        }
}


double BM ()
{
  double feet;
  double inches;
  double height;
  double weight;
  double bmi;

  cout << "== BMI Calculator ==" << endl;
  cout << "Step 1: Enter height" << endl;

  cout << "Feet:" << endl;
  cin >> feet;

  cout << "Inches:" << endl;
  cin >> inches;

  cout << "step 2: Enter weight" << endl;
  cout << "Pounds:" << endl;
  cin >> weight;

  height = (feet * 12) + inches;
  bmi = (weight * 703) / (height * height);

  if (bmi < 18.5)
    {
      cout << "BMI: " << bmi << " Underweight" << endl;
    }
  else if (bmi >= 18.5 && bmi <= 24.9)
    {
      cout << "BMI: " << bmi << " Normal" << endl;
    }
  else if (bmi >= 15 && bmi <= 29.9)
    {
      cout << "BMI: " << bmi << " Overweight" << endl;
    }
  else if (bmi >= 30)
    {
      cout << "BMI: " << bmi << " Obese" << endl;
    }
  else
    cout << "error, please check your information and try again.\n";
}
