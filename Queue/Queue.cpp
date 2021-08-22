#include <iostream>

using namespace std;


class que_array
{
    private :
        int f,r;
        int s;
        int *a;
    public :

    que_array(int x) {s = x+1; a = new int [s];f = 0 ; r = 0;}

    bool in_que(int x)
    {
        if (((r+1)%(s)) == f)
            return false;
        a[r] = x;
        r = (r+1)%s;
        return true;
    }
    bool De_que(int &x)
    {
        if (f == r)
            return false;
        x = a[f];
        f = (f+1)%s;
        return true;
    }
};


void menu()
{
    int x;
    cout << "Enter size : ";
    cin >> x;
     que_array q(x);

     bool w;

    do
    {
        cout << "\n enter \n 1- in_que \n 2- De_que \n";
        cin >> x;
        switch(x)
        {
        case 1:
            {
                int y;
                cout << "enter any num : ";
                cin >> y;
                if(q.in_que(y))
                    cout << "\n ******\n done \n ****** \n";
                else
                    cout << "\n ****** \n the array is full \n ****** \n";
                break;
            }
        case 2 :
            {
                int y;
                if (q.De_que(y))
                    cout << "\n ****** \n " << y << "\n ****** \n";
                else
                    cout << "\n ******\n the array is Empty \n ****** \n";
                break;
            }
        }
        cout << "\n if you want use this program agin pleas enter num 1 or 0 to exist : ";
        cin >> w;
    }while(w);
        cout << "\n thanks for using this program \n";
}

int main()
{
    cout << "you have que_array !" << endl;
    menu();
    return 0;
}
