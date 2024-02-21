#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title[20];
    string author[20];
    string publ[20];
    float price[20];
    int stock[20];
    static int successfulTransactions;
    static int unsuccessfulTransactions;

public:
  
   void  add_book(int n) {
    for(int i=0;i<n;i++)
	{
		
		cout<<"\nENTER TITLE : ";
		cin>>title[i];
		cout<<"ENTER AUTHOR :";
		cin>>author[i];
		cout<<"ENTER PUBLICATION : ";
		cin>>publ[i];
		cout<<"ENTER PRICE : ";
		cin>>price[i];	
		cout<<"ENTER BOOK STOCK : ";
		cin>>stock[i];
         }
    }
    void disply(int n)
    {	cout<<"----------------------------------------------------------------------------\n";
    	cout<<"Title"<<"author"<<"Publication"<<"Price"<<"Total Stock";
    	cout<<"\n----------------------------------------------------------------------------\n";
    	for(int i=0;i<n;i++)
    	{
    		cout<<title[i]<<"\t"<<author[i]<<"\t"<<publ[i]<<"\t"<<price[i]<<"\t"<<stock[i]<<"\n";
		}
	}
	void update_book(string t,int n)
	{   int ch;
     
     	while(ch == 0)
	     { 	string n_title;
	    	cout<<"\n*** MENU ***";
        cout<<"\n 1:UPDATE  TITLE : ";
        cout<<"\n  2: UPDATE PRICE :";
        cout<<"\n ENTER THE CHOICE : ";
        cin>>ch;
		switch(ch)
		{ 
		     case 1:
		    
			    cout<<"\nENTER NEW TITLE : ";
			    cin>>n_title;
		       for(int i=0;i<n;i++)
		       {
		       	  if(title[i] == t)
		       	  {
		       	  	title[i]=n_title;
		       	  	cout<<"TItLE UPDTAE SUCCESSFULLY";
				  }
			   }
			 break;	
			 case 2:
			 	float n_price;
			    cout<<"\nENTER NEW PRICE : ";
			    cin>>n_price;
		       for(int i=0;i<n;i++)
		       {
		       	  if(title[i] == t)
		       	  {
		       	  	price[i]=n_price;
		       	  	cout<<"PRICE UPDATE SUCCESSSFULLY";
				  }
			   }
			 	break;
		}
	}
  }
  
  void search_book(int n)
  { int count =0;
    string t;
    cout<<"\nENTER THE TITLE TO SEARCH : ";
    cin>>t;
  	for(int i=0;i<n;i++)
  	{
  		if(title[i] == t)
  		{
  		   cout<<"\nBOOK FOUND";
  		   count++;
		}
		else{
			count=count+0;
		}
	  }
	  if(count == 0)
	  {
	  		cout<<"\nBOOK NOT FOUND";
	  }
  }


void purchase_book(int n)
{
	string book_title;
	int nbb;
	cout<<"ENTER BOOK TITLE WHICH YOU WANT TO BUY : ";
	cin>>book_title;
	 
	 for(int i=0;i<n;i++)
	 {
	 	if(book_title == title[i])
	 	{
	 		cout<<"\nHOW MANY BOOK YOU WANT YO BUY : ";
	 		cin>>nbb;
	 		if(nbb>stock[i])
	 		{
	 			cout<<"TOTAL BOOKS AVILABLE "<<stock[i];
	 			cout<<"\n BOOK BUY UNSUCCESFULLY !";
	 			Book::unsuccessfull();
			 }
			 else{
			 	cout<<"TOTAL :"<<nbb<< "\tBOOKS BUY SUCCESSFULLY !";
			 	stock[i]=stock[i]-nbb;
			 	Book::successfull();
			 }
		 }
	 }
}
   
static void successfull()
{
successfulTransactions++;
}

static void unsuccessfull()
{
unsuccessfulTransactions++;
}
    static void displayTransactionCount() {
        cout << "Successful transactions: " << successfulTransactions << endl;
        cout << "Unsuccessful transactions: " << unsuccessfulTransactions << endl;
    }
};


int Book::successfulTransactions = 0;
int Book::unsuccessfulTransactions = 0;


int main() {
  Book b;
    
    int n;
    int ch;
   	string title;
     cout<<"\n\n*** MENU ***";
    cout<<"\n1 : ADD BOOKS";
    cout<<"\n2 : UPDATE BOOK";
    cout<<"\n3 : DISPLY ";
    cout<<"\n4 : SEARCH BOOK ";
    cout<<"\n5 : BUY BOOK";
    cout<<"\n6 : TRANSACTION COUNT ";
    cout<<"\n0 : EXIT ";
    while(ch)
    {
    	  cout<<"\nENTER THE CHOICE : ";
          cin>>ch;
    	switch(ch)
    	{
		 case 1 : 
    	 cout<<"\n ENTER HOW MANY BOOK YOU WANT TO ENTER : ";
         cin>>n;
               b.add_book(n);
               break;
        case 2:
        	cout<<"ENTER THE TITLE TO UPDATE ";
        	cin>>title;
        	b.update_book(title,n);
        	break;
        
		 case 3: 
              b.disply(n);
              break;
         case 4 : 
           b.search_book( n);
           break;
        case 5: 
            b.purchase_book(n);
            break;
        case 6:
        	b.displayTransactionCount();
        case 0 :
            break;
            
            
            
            
          }
       }
      
	}
   




