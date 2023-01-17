         #include<iostream>
                   
                    using namespace std;

                    class Test
                    {
                   
                    private:
                   
                    int x;
                    int y;
                   
                    public:                   
                    
					Test(int x = 0, int y = 0) { this->x = x; this->y = y; }                
                    Test &setX(int a) { x = a; return *this ; }                  
                    Test &setY(int b) { y = b; return *this;}
                    
                   
                    };

                    int main()
                    {
                    
                
                    // Chained function calls. All calls modify the same object
                    // as the same object is returned by reference
                    Test obj1;
					//obj1.setY(20);                                                         
                    obj1.setX(10); 
					obj1.setY(5) ;
                   
                    return 0;
                    }
                   

