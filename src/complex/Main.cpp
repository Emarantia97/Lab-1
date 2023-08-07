// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition
#include <vector>
#include <cmath>
#include <sstream>

using namespace std; // cout, endl, complex are all part of this namespace

using complexNum = complex <float>;

class RootsCalculator
{
    public:
        RootsCalculator()
        {
            user_input="q";
            still_playing = true;
        }

        void intConverter()
        {
             a_complex = complexNum {static_cast<float> (input_a),0};
             b_complex = complexNum {static_cast<float> (input_b),0};
            c_complex = complexNum  {static_cast<float> (input_c),0};
        }

        vector <complexNum> calculateRoot()
        {
            intConverter();

            auto minusOne =  complexNum {-1,0};
            auto two =  complexNum {2,0};
            auto four =  complexNum {4,0};

            vector <complexNum> roots;

            root_1 = minusOne*b_complex+sqrt(b_complex*b_complex-four*a_complex*c_complex)/(two*a_complex);
            root_2 = minusOne*b_complex-sqrt(b_complex*b_complex-four*a_complex*c_complex)/(two*a_complex);

            roots.push_back(root_1);
            roots.push_back(root_2);

           // cout << root_1;

            return roots;
        }

        void displayRoots()
        {
            auto roots = calculateRoot();
           auto root_1 = roots.at(0);
           auto root_2 = roots.at(1);

           cout << root_1.real() <<" + "<< root_1.imag()<<"j" << endl;

           cout << root_2.real() <<" + " <<root_2.imag()<< "j" <<endl;

        }


        void inputValueChecker()
        {

            if(user_input[0]=='q'||user_input[0]=='Q')
            {
                still_playing=false;
            }
            else
            {
               istringstream iss(user_input);
               iss >> input_a >> input_b >> input_c;


            }


        }
        void executorFunction()
        {
            inputValueChecker();

            if(still_playing)
            {
                displayRoots();
            }
        }

        void getInput(string _input){
            user_input = _input;
        }

        bool getPlayStatus(){ //detailed function name
            return still_playing;
        }

    protected:

    private:
        int input_a, input_b, input_c;
        string user_input;
        complexNum  a_complex, b_complex, c_complex;
        complexNum root_1, root_2;
        bool still_playing;

};


int main()
{
    string input;
    //char input = 'q';

    RootsCalculator member = RootsCalculator();

    while(member.getPlayStatus()){


    cout << "enter a, b , c or q to quit";
    getline(cin, input) ;

	member.getInput(input);

    member.executorFunction();
    }




	return 0;
}
