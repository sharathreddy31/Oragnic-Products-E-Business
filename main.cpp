/*#include <iostream>
#include<cstring>
#include<iomanip>
#include<fstream>
#include <cctype> */
#include<bits/stdc++.h>

using namespace std;
int total=0,total1=0,total2=0;
class order
{
     string vege;
     int kge;
     public:
 void getdata(string veg,int kg);

 void putdata()
 {
   if(vege=="\0")
    return ;
   else
{
 cout<<endl;
 cout<<vege<<setw(30)<<kge<<endl;
 cout<<endl;
}
 }

 void display();

};

void order::getdata(string veg,int kg)
 {
    fstream object;
    object.open("orders.csv",ios::app|ios::in);
    object<<veg<<setw(10)<<kg<<endl;
    object.close();
    vege=veg;
    kge=kg;
 }
 void order::display()
 {
     char line[25];
     fstream object2;
     object2.open("orders.csv",ios::in);
     cout<<endl;
     cout<<"\t\t\t\t\t\tNAME"<<setw(10);cout<<"KG"<<endl;
     while(object2)
     {
        object2.getline(line,25);
        cout<<"\t\t\t\t\t\t"<<line;
        cout<<endl;
     }
    int count = 0;
    string lines;
    /* Creating input filestream */
    ifstream file("orders.csv");
    while (getline(file, lines))
        count++;

    cout << " \t\t\t\tTOTAL NUMBER OF ORDERS RECEIVED TILL DATE IS : " << count << endl;
    cout<<endl;
}

int main()
{
    int choice,i,j,k,n,kg,m,o;
    string veg,frut,sed;
    string username,password;
    string sha;
    order price;
    order v[100],f[100],s[100];
    cout<<"\t\t\t\t\t\t------------------------WELCOME TO ORGANIC PRODUCTS PORTAL---------------------"<< endl;
   while(1)
    {
         cout<<"0:TO ENTER INTO ADMIN PORTAL"<<"\n"<<"1:TO BUY VEGETABLES"<<"\n"<<"2:TO BUY FRUITS"<<"\n"<<"3:TO BUY SEEDS "<<"\n"<<"4:TO VIEW ORDER"<<"\n"<<"5:EXIT"<<"\n";
         cout<<endl;
           cout<<"Enter Your Choice : ";
            cin>>choice;

         cout<<endl;

        switch(choice)
        {

            case 1:
                cout<<"1:TOMATO RS.60/kg"<<"\n"<<"2:ONION RS.80/kg"<<"\n"<<"3:CUCUMBER 55/kg "<<"\n"<<"4:CARROT RS.70/kg"<<"\n";
                cout<<endl;
                cout<<"ENTER YOUR ORDER FOR VEGETABLE"<<endl;
                cout<<endl;
                 cout<<"ENTER NUMBER OF VEGETABLES"<<endl;
                 cin>>n;
                 while(n<=0)
                {
                     cout<<"INVALID NUMBER ENTERED !!!"<<endl;
                     cout<<"ENTER A VALID NUMBER :";
                     cin>>n;
                }
                cout<<endl;
                for(i=1;i<=n;i++)
                    {
                            cout << "Enter Name Of "<<i<<" Vegetable:"<<endl ;
                            cin>>veg;
                           if(veg=="tomato"||veg=="onion"||veg=="cucumber"||veg=="carrot"||veg=="TOMATO"||veg=="ONION"||veg=="CUCUMBER"||veg=="CARROT")
                              goto Q;


                            while((veg!="tomato")||(veg!="onion")||(veg!="cucumber")||(veg!="carrot")||(veg!="TOMATO")||(veg!="ONION")||(veg!="CUCUMBER")||(veg!="CARROT"))
                            {

                            cout<<"Invalid Vegetable Entered !!!"<<endl;
                            cout<<"Enter Valid Vegetable Name :";
                            cin>>veg;
                            if(veg=="tomato"||veg=="onion"||veg=="cucumber"||veg=="carrot"||veg=="TOMATO"||veg=="ONION"||veg=="CUCUMBER"||veg=="CARROT")
                                break;
                            }

                        Q:    cout<<"Enter The Kilograms:"<<endl;
                            cin>>kg;
                            if(kg>0)
                            cout<<"";
                            else
                            do
                            {
                                cout<<"Invalid Kilogram Entered !!!"<<endl;
                                cout<<"Enter Valid Kilogram :";
                                cin>>kg;
                            }while(kg<=0);
                             if(veg=="tomato"||veg=="TOMATO") //60rs per kg
                                total+=(kg*60);
                            if(veg=="carrot"||veg=="CARROT")
                                total+=(kg*70);
                            if(veg=="cucumber"||veg=="CUCUMBER")
                                total+=(kg*55);
                            if(veg=="onion"||veg=="ONION")
                                total+=(kg*80);
                                 v[i].getdata(veg,kg);

                }
                break;
                case 2:
                cout<<"1:APPLE RS.200/kg"<<"\n"<<"2:MANGO RS.80/kg"<<"\n"<<"3:JACKFRUIT 60/kg "<<"\n"<<"4:PINEAPPLE RS.40/kg"<<"\n";
                cout<<endl;
                cout<<"ENTER YOUR ORDER FOR FRUIT"<<endl;
                cout<<endl;
                cout<<"ENTER NUMBER OF FRUITS"<<endl;
                 cin>>m;
                  while(m<=0)
                {
                     cout<<"INVALID NUMBER ENTERED !!!"<<endl;
                     cout<<"ENTER A VALID NUMBER :";
                     cin>>m;
                }
                cout<<endl;
                for(j=1;j<=m;j++)
                    {
                            cout << "Enter Name Of "<<j<<" Fruit:"<<endl ;
                            cin>>frut;
                            if(frut=="apple"||frut=="mango"||frut=="jackfruit"||frut=="pineapple"||frut=="APPLE"||frut=="JACKFRUIT"||frut=="MANGO"||frut=="PINEAPPLE")
                           goto A ;
                            while(frut!="apple"||frut!="mango"||frut!="jackfruit"||frut!="pineapple"||frut!="APPLE"||frut!="JACKFRUIT"||frut!="MANGO"||frut!="PINEAPPLE")
                            {
                            cout<<"Invalid Fruit Entered !!!"<<endl;
                            cout<<"Enter Valid Fruit Name :";
                            cin>>frut;
                            if(frut=="apple"||frut=="mango"||frut=="jackfruit"||frut=="pineapple"||frut=="APPLE"||frut=="JACKFRUIT"||frut=="MANGO"||frut=="PINEAPPLE")
                                break;
                            }
                        A:    cout<<"Enter The Kilograms:"<<endl;
                            cin>>kg;
                            if(kg>0)
                            cout<<"";
                            else
                                do
                            {
                                cout<<"Invalid Kilogram Entered !!!"<<endl;
                                cout<<"Enter Valid Kilogram :";
                                cin>>kg;
                            }while(kg<=0);
                            if(frut=="apple"||frut=="APPLE")
                               total1+=(kg*200);
                            if(frut=="mango"||frut=="MANGO")
                                 total1+=(kg*80);
                            if(frut=="jackfruit"||frut=="JACKFRUIT")
                                 total1+=(kg*60);
                             if(frut=="pineapple"||frut=="PINEAPPLE")
                                total1+=(kg*40);
                        f[j].getdata(frut,kg);

                    }
        break;
        case 3:
                cout<<"1:CUMIN RS.60/kg"<<"\n"<<"2:MUSTARD RS.80/kg"<<"\n"<<"3:CAROM 60/kg "<<"\n"<<"4:FENNEL RS.40/kg"<<"\n";
                cout<<endl;
                cout<<"ENTER YOUR ORDER FOR SEEDS"<<endl;
                cout<<endl;
                cout<<"ENTER NUMBER OF SEEDS"<<endl;
                 cin>>o;
                  while(o<=0)
                {
                     cout<<"INVALID NUMBER ENTERED !!!"<<endl;
                     cout<<"ENTER A VALID NUMBER :";
                     cin>>o;
                }
                cout<<endl;
                for(k=1;k<=o;k++)
                    {
                            cout << "Enter Name Of "<<k<<" Seeds:"<<endl;
                            cin>>sed;
                           if(sed=="cumin"||sed=="mustard"||sed=="carom"||sed=="fennel"||sed=="CUMIN"||sed=="MUSTARD"||sed=="CAROM"||sed=="FENNEL")
                           goto Z ;
                            while(sed!="cumin"||sed!="mustard"||sed!="carom"||sed!="fennel"||sed!="CUMIN"||sed!="MUSTARD"||sed!="CAROM"||sed!="FENNEL")
                            {
                            cout<<"Invalid Seed Entered !!!"<<endl;
                            cout<<"Enter Valid Seed Name :";
                            cin>>sed;
                             if(sed=="cumin"||sed=="mustard"||sed=="carom"||sed=="fennel"||sed=="CUMIN"||sed=="MUSTARD"||sed=="CAROM"||sed=="FENNEL")
                                break;
                            }
                            Z:  cout<<"Enter The Kilograms:"<<endl;
                            cin>>kg;
                          if(kg>0)
                            cout<<"";
                            else
                                do
                            {
                                cout<<"Invalid Kilogram Entered !!!"<<endl;
                                cout<<"Enter Valid Kilogram :";
                                cin>>kg;
                            }while(kg<=0);
                            if(sed=="cumin"||sed=="CUMIN")
                                   total2+=(kg*60);
                            if(sed=="mustard"||sed=="MUSTARD")
                                  total2+=(kg*80);
                            if(sed=="carom"||sed=="CAROM")
                                   total2+=(kg*60);
                            if(sed=="fennel"||sed=="FENNEL")
                                   total2+=(kg*40);
                            s[k].getdata(sed,kg);
                    }
                    break;
                    case 4:cout<<"The Ordered Things Are As Follows:"<<endl;
                           cout<<endl;
                           cout<<"VEGETABLE ORDERED ARE AS FOLLLOWS :"<<endl;
                           cout<<"----------- -----------------------------"<<endl;
                           cout<<"ITEMS"<<setw(30)<<"KILOGRAMS ORDERED "<<endl;
                           cout<<"----------- -----------------------------"<<endl;
                           cout<<endl;
                           for(int q=1;q<=n;q++)
                           {
                               v[q].putdata();
                           }
                           cout<<endl;
                           cout<<"FRUITS ORDERED ARE AS FOLLOWS:"<<endl;
                           cout<<"----------- -----------------------------"<<endl;
                           cout<<"ITEMS"<<setw(30)<<"KILOGRAMS ORDERED "<<endl;
                           cout<<"----------- ------------------------------"<<endl;
                           cout<<endl;
                            for(int y=1;y<=m;y++)
                          {
                               f[y].putdata();
                          }
                          cout<<endl;
                          cout<<"SEEDS ORDERED ARE AS FOLLOWS :"<<endl;
                          cout<<"----------- -----------------------------"<<endl;
                          cout<<"ITEMS"<<setw(30)<<"KILOGRAMS ORDERED "<<endl;
                          cout<<"----------- ----------------------------"<<endl;
                          cout<<endl;
                          for(int z=1;z<=k;z++)
                          {
                              s[z].putdata();
                          }
                          cout<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<"----------------------------------------"<<endl;
                          cout<<"TOTAL VEGETABLES PRICE IS\t:"<<total<<endl;
                          cout<<"----------------------------------------"<<endl;
                          cout<<endl;
                          cout<<endl;
                          cout<<"---------------------------------------"<<endl;
                          cout<<"TOTAL FRUITS PRICE IS\t\t:"<<total1<<endl;
                          cout<<"----------------------------------------"<<endl;
                         cout<<endl;
                         cout<<endl;
                         cout<<"---------------------------------------"<<endl;
                         cout<<"TOTAL SEEDS PRICE IS\t\t:"<<total2<<endl;
                         cout<<"----------------------------------------"<<endl;
                           cout<<endl;
                           cout<<endl;
                           total=0;
                           total1=0;
                           total2=0;
                          break;
                          case 5:exit(0);
                          case 0: cout<<"\t\t\t\t\t\t\t\tWELCOME TO THE ADMIN PORTAL"<<endl;
                                  cout<<"\t\t\t\t\t\t\t\t---------------------------"<<endl;
                                  cout<<"\t\t\t\t\t\t\t\tUSERNAME:";
                                  cin>>username;
                                  if(username=="vishwaraj@orgfarm.com"||username=="sharathreddy@orgfarm.com")
                                  {
                                  cout<<"\t\t\t\t\t\t\t\tPASSWORD:";
                                  cin>>password;
                                  if(username=="vishwaraj@orgfarm.com")
                                  {
                                  int flag=0;
                                  if(password=="vishwaraj09")
                                  {
                                      cout<<"\t\t\t\t\t\tTOTAL ORDER RECEIVED TILL DATE "<<endl;
                                      v[1].display();
                                      flag=1;
                                  }
                                    if(flag==0)
                                     cout<<"\t\t\t\t\t\t\t\tPASSWORD INCORRECT!!!!"<<endl;
                                  }
                                  if(username=="sharathreddy@orgfarm.com")
                                  {
                                      int flag1=0;
                                      if(password=="sharathreddy")
                                      {
                                          cout<<endl;
                                      cout<<"\t\t\t\t\t\tTOTAL ORDERS RECEIVED TILL DATE "<<endl;
                                      v[1].display();
                                      flag1=1;
                                      }
                                       if(flag1==0)
                                     cout<<"\t\t\t\t\t\t\t\tPASSWORD INCORRECT!!!!"<<endl;
                                }
                                  }
                                 else
                                    cout<<"\t\t\t\t\t\t\t\tINVALID USERNAME ENTERED!!!!"<<endl;
                                  break;
                    default:cout<<"Invalid Choice Entered !!! "<<endl;
    }
    }
    return 0;
}



