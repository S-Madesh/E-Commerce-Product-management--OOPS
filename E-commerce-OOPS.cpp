#include<iostream> 
#include<string> 

using namespace std; 

class Product 
{ 
 	protected: 
 	 	int pid,qty;  	 	
		string pname,category,user_name,user_email,phone_num,city,state,address;  	 	
		float price,tot_amount;  	
		public: 
 	 	void get_user_detail();  	 	
		virtual void get_product_detail();  	 	
		virtual void display_product_detail();  	 	
		void display_user_detail(); 
}; 
void Product::get_user_detail() 
{ 	cout<<"Enter name of the customer:"<<endl;  	
	cin>>user_name; 
 	cout<<"Enter the E-mail of the customer:"<<endl;  	
	cin>>user_email;  	
	cout<<"Enter mobile number of the customer:"<<endl;  	
	cin>>phone_num; 
 	cout<<"Enter city of the customer:"<<endl;  	
	cin>>city;  	
	cout<<"Enter state of the customer:"<<endl;  	
	cin>>state;  	
	cout<<"Enter residential address of customer:"<<endl;  	
	cin>>address; 
} 
void Product::get_product_detail() 
{ 
} 
void Product::display_product_detail() 
{ 
} 
void Product::display_user_detail() 
{ 
 	cout<<"Name:"<<user_name<<endl;  	
	cout<<"E-mail:"<<user_email<<endl;  	
	cout<<"Mobile number:"<<phone_num<<endl;  	
	cout<<"City:"<<city<<endl;  	
	cout<<"State:"<<state<<endl;  	
	cout<<"Address:"<<address<<endl; 
} 
 
class Grocery:public Product 
{ 
 	public: 
 	 	void get_product_detail();  	 	
		void display_product_detail();  	 	
		friend void search_by_id(Grocery g[], int id, int n); 
 	 	friend void search_by_category(Grocery g[], string category, int n);  	 	
		friend void modify(Grocery g[], int pid, int n);  	 	
		void t_amount(); 
}; 
void Grocery::get_product_detail() 
{ 
 	cout<<"Entering the Grocery Product Details:"<<endl;  	
	cout<<"Enter product ID:"<<endl;  	
	cin>>pid;  	
	cout<<"Enter product Name:"<<endl; 
	cin>>pname; cout<<"Enter the category:"<<endl; 
	cin>>category; 
	cout<<"Enter price:"<<endl; 
	cin>>price; cout<<"Enter the quantity:"<<endl; 
	cin>>qty; 
 	t_amount(); 
} 
void Grocery::display_product_detail() 
{ 
 	cout<<"Product Name:"<<pname<<endl;  	
	cout<<"Product ID:"<<pid<<endl;  	
	cout<<"Category:"<<category<<endl;  	
	cout<<"Price:"<<price<<endl;  	
	cout<<"Quantity:"<<qty<<endl;  	
	cout<<"Total amount:"<<tot_amount<<endl; 
} 
void Grocery::t_amount() 
{ 
 	tot_amount=price*qty; 
} 
void search_by_id(Grocery G[], int id, int n) 
{ 
 	for(int i=0;i<n;i++) 
 	{ 
 	 	if(G[i].pid==id) 
 	 	{ 
 	 	 	G[i].display_product_detail();  	 	 	
			break; 
 	 	} 
 	} 
} 
void search_by_category(Grocery G[], string category, int n) 
{ 
for(int i=0;i<n;i++) 
{ 
	 	if(G[i].category==category) 
	 	{ 
	 	 	G[i].display_product_detail(); 
	 	} 
} 
} 
void modify(Grocery G[], int id, int n) 
{ 
 	for(int i=0;i<n;i++) 
 	{  	 	if(G[i].pid==id) 
 	 	{ 
 	 	 	G[i].get_product_detail(); 
 	 	 	break; 
 	 	} 
 	} 
} 
class Stationary:public Product 
{ 
 	public: 
  	void get_product_detail();   
	void display_product_detail();   
	friend void search_by_id(Stationary s[], int id, int n);   
	friend void search_by_category(Stationary s[], string category, int n); 
  	friend void modify(Stationary s[], int pid, int n);   void amount(); 
}; 
void Stationary::get_product_detail() 
{ 
 	cout<<"Entering the Stationary roduct Details:"<<endl;  	
	cout<<"Enter product ID:"<<endl;  	
	cin>>pid; 
	cout<<"Enter product Name:"<<endl; 
	cin>>pname; 
	cout<<"Enter the category:"<<endl; 
	cin>>category; 
	cout<<"Enter price:"<<endl; 
	cin>>price; 
	cout<<"Enter the quantity:"<<endl; 
 	cin>>qty;  	
	amount(); 
} 
void Stationary::display_product_detail() 
{ 
 	cout<<"Product Name:"<<pname<<endl;  	
	cout<<"Product ID:"<<pid<<endl;  	
	cout<<"Category:"<<category<<endl;  	
	cout<<"Price:"<<price<<endl;  	
	cout<<"Quantity:"<<qty<<endl;  	
	cout<<"Total amount:"<<tot_amount<<endl; 
} 
void Stationary::amount() 
{ 
 	tot_amount=price*qty; 
} 
void search_by_id(Stationary S[], int id, int n) 
{ 
 	for(int i=0;i<n;i++) 
 	{ 
 	 	if(S[i].pid==id) 
 	 	{ 
 	 	 	S[i].display_product_detail();  	 	 	
			break; 
 	 	} 
 	} 
} 
void search_by_category(Stationary S[], string category, int n) 
{ 
for(int i=0;i<n;i++) 
{ 
 
	 	if(S[i].category==category) 
	 	{ 
	 	 	S[i].display_product_detail(); 
	 	} 
	 	} 
} 
void modify(Stationary S[], int id, int n) 
{ 
	 	for(int i=0;i<n;i++) {  	 	
			if(S[i].pid==id) 
	 	 	{ 
	 	 	 	S[i].get_product_detail(); 
	 	 	 	break; 
	 	 	} 
	 	} 
} 
class Electronics : public Product 
{ 
	 	public: 
 	 	void get_product_detail();  	 	
		void display_product_detail(); 
 	 	friend void search_by_id(Electronics E[], int pid, int n);  	 	
		friend void search_by_category(Electronics E[], string category, int n); 
 	 	friend void modify(Electronics E[], int id, int n);  	 	
		void total_amount(); 
}; 
void Electronics::get_product_detail() 
{ 
 	cout<<"Entering the Electronics Product Details:"<<endl;  	
	cout<<"Enter product ID:"<<endl;  	
	cin>>pid; 
	cout<<"Enter product Name:"<<endl; 
	cin>>pname; 
11
cout<<"Enter the category:"<<endl; cin>>category; cout<<"Enter price:"<<endl; cin>>price; 
 	cout<<"Enter the quantity:"<<endl;  	
	cin>>qty;  	
	total_amount(); 
} 
void Electronics::display_product_detail() 
{ 
 	cout<<"Product Name:"<<pname<<endl;  	
	cout<<"Product ID:"<<pid<<endl;  	
	cout<<"Category:"<<category<<endl;  	
	cout<<"Price:"<<price<<endl;  	
	cout<<"Quantity:"<<qty<<endl;  	
	cout<<"Total amount:"<<tot_amount<<endl; 
} 
void Electronics::total_amount() 
{ 
	 	tot_amount=price*qty; 
} 
void search_by_id(Electronics E[], int id, int n) 
{ 
	 	for(int i=0;i<n;i++) 
	 	{ 
	 	 	if(E[i].pid==id) 
	 	 	{ 
 	 	 	E[i].display_product_detail();  	 	 	
			break; 
	 	 	} 
	 	} 
} 
void search_by_category(Electronics E[], string category, int n) 
{ 
	for(int i=0;i<n;i++) 
	{ 
	 	if(E[i].category==category) 
	 	{ 
	 	 	E[i].display_product_detail(); 
	 	} 
	} 
} 
void modify(Electronics E[], int id, int n) 
{ 
	 	for(int i=0;i<n;i++) 
 	{  	 	if(E[i].pid==id) 
	 	 	{ 
	 	 	 	E[i].get_product_detail(); 
	 	 	 	break; 
	 	 	} 
	 	} 
} 
int main() 
{ 
    Grocery g[3]; 
    Stationary s[3]; 
    Electronics e[3]; 
 
    g[0].get_user_detail();     
	for(int i = 0 ; i < 3; i++) 
    { 
        //g[i].get_user_detail();         g[i].get_product_detail(); 
    } 
    s[0].get_user_detail();     
	for(int i = 0 ; i < 3; i++) 
    { 
        //s[i].get_user_detail();         s[i].get_product_detail();     } 
    e[0].get_user_detail();     
	for(int i = 0 ; i < 3; i++) 
    { 
        //e[i].get_user_detail();         e[i].get_product_detail(); 
    } 
 
    int ch;     
	do 
    { 
        cout<<"1. Grocery"<<endl;         
		cout<<"2. Stationary"<<endl;         
		cout<<"3. Electronic"<<endl;         
		cout<<"4. Exit"<<endl;         
		cout<<"Enter the type of product: ";         
		cin >> ch; 
 
        switch(ch) 
        {             
			case 1: 
            {                 
				int choice;                 
				do 
                { 
                    cout<<"1. Search by ID\n";                     
					cout<<"2. Search by category\n";                     
					cout<<"3. Modify\n";                     
					cout<<"4. Display user detail:\n";                     
					cout<<"5. Back\n";                    
					 cout<<"Enter your choice: ";                     
					 cin >> choice; 
 
                    switch (choice) 
                    { 
                    case 1:                    
					{                         
						int id;                         
						cout<<"Enter id : ";                         
						cin>>id;                         
						search_by_id(g, id, 5);                         
						break;                     
					}                     
					case 2: 
                    { 
                        string category;                         
						cout<<"Enter category: ";                         
						cin>>category;                         
						search_by_category(g, category, 5); 
                        break;                     
					}                     
					case 3:                     
					{                         
						int id; 
                        cout<<"Enter product id: ";                        
						cin >> id;                         
						modify(g, id, 5);                         
						break;                     
					}                     
					case 4: 
                    { 
                        g[0].display_user_detail(); 
                    } 
	 	 	    } 
                } while (choice <= 4);                 
				break; 
            }             
			case 2: 
            {                 
				int choice;                 
				do 
                { 
                    cout<<"1. Search by ID\n";                     
					cout<<"2. Search by category\n";                     
					cout<<"3. Modify\n";                     
					cout<<"4. Display user Details:\n"; 
	 	 	    	cout<<"5. Back\n"; 
                    cout<<"Enter your choice: ";                     
					cin >> choice; 
 
                    switch (choice) 
                    {                     
						case 1:                     
						{                         
							int id;                         
							cout<<"Enter id : ";                         
							cin>>id;                         
							search_by_id(e, id, 5);                         
							break;                     
						}                     
						case 2: 
                    	{ 
                        	string category;                         
							cout<<"Enter category: ";                         
							cin>>category; 
                        	search_by_category(e, category, 5);                         
							break;                     
						}                     
						case 3:                     
						{                         
							int id; 
                        	cout<<"Enter product id: ";                         
							cin >> id;                         
							modify(e, id, 5);                         
							break; 
                    	}                     
						case 4: 
                    	{ 
                        	e[0].display_user_detail(); 
                    	} 
                    } 
                } while (choice <= 4); 
				break; 
            }             
			case 3: 
            {                 
				int choice;                 
				do 
                { 
                    cout<<"1. Search by ID\n";                     
					cout<<"2. Search by category\n";                     
					cout<<"3. Modify\n";                     
					cout<<"4. Display User Details:\n"; 
	 	 	    	cout<<"5. Back\n"; 
                    cout<<"Enter your choice: ";                     
					cin >> choice; 
 
                    switch (choice) 
                    {                     
						case 1:                     
						{                         
							int id;                         
							cout<<"Enter id : ";                         
							cin>>id;                         
							search_by_id(s, id, 5);                         
							break;                     
						}                     
						case 2: 
                    	{ 
                        	string category; 
                        	cout<<"Enter category: ";                         
							cin>>category;                         
							search_by_category(s, category, 5);                         
							break;                     
						}                     
						case 3:                     
						{                         
							int id; 
                        	cout<<"Enter product id: ";                         
							cin >> id;                         
							modify(s, id, 5);                         
							break;                     
						}                      
						case 4: 
                    	{ 
                        	s[0].display_user_detail(); 
                    	} 
                    } 
                } while (choice <= 4);                 
				break; 
            } 
        } 
    } while (ch < 4); 
     
} 
