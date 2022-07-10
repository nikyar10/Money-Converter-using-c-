# include <iostream>
using namespace std;

int main()
{
    const double dollar_to_lira {13.54};
    const double dollar_to_afg {95.25};
    
  double lira {0};
  double dollar {0};
  
  cout << " How many dollars u wanna convert to the lira" <<endl;
  cin>>dollar;
  
  
  lira = dollar * dollar_to_lira;
  
  cout <<" The amount of lira" << lira <<" becomes" <<endl;
  
  
  cout  << endl;
  

  double afg;
  
  cout <<" How many dollars u wanna convert to the afg" <<endl;
  cin>>dollar;
  
  afg = dollar * dollar_to_afg;
  
  cout <<" Your amount of dollars make:" << afg <<" Afghani:" <<endl;
  
  
    
    
    
    
    
    
    
    return 0;
}