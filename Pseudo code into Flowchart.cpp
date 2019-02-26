#include <iostream>
#include<stdlib.h>
#include <string>

using namespace std;

int main()
{
	system("color 5E");
string SW[50] ;
int  counter = 0;

string x, s, line,ur,line1,line2;
int er=1;




				int nn[10];

cout<<"\n\n";

	
    cout<<"\t\t\t\t\t\t\t\t\t      !@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                         WELCOME TO PSEUDOFLOW PROGRAM"<<endl;
    cout<<"\n\n \t\t\t\t\t\t\t\t\             !@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@!@"<<endl;
    cout<<endl;

    cout<<"\n\n\n\t  ***************************************************************"<<endl;
    cout<<"\t   ^THIS IS A PROGRAM THAT CONVERT PSEUDOCODE INTO FLOWCHART^  "<<endl;

    cout<<"\n\t****************************************************************"<<endl;
    
    cout<<"press 1 to start the program:  ";
   cin>>er; 
   if (er==1)
   {
   
    system("CLS")	;
  	
						cout<<"\n\t\t   /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\   "<<endl;
					    cout<<"\n\t\t  /  ENTER YOUR  PSEUDOCODE    \\  "<<endl;
					    cout<<"\n\t\t /\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\ "<<endl;
					    			
    	        goto b;
    			
    	a:	
    			cout<<"\t \t             ||          "<<endl;
                cout<<"\t \t             ||          "<<endl;
                cout<<"\t \t             ||          "<<endl;
                cout<<"\t \t             ||          "<<endl;
                cout<<"\t \t             ||          "<<endl;
                cout<<"\t \t             ||          "<<endl;
                cout<<"\t \t             \\/          "<<endl;
    	b:		
		
					cin>>line;
				
    				getline(cin,ur);
    			
    		for(int i=0 ; i < line.length();i++){
    				
    			if(line[i] == ' ')
				{// based on space add to th array
        			counter++;
       				i++;
   				}

    				   SW[counter] += line[i];
    
    			
    			
    			if(line == "start")
    			{
    				
            cout<<"                   * * * * * * * * * * * * *     " << endl;
    		cout<<"                *                              *   " << endl;
    		cout<<"              *                                 *   " << endl;
    		cout<<"             *                                   *   " << endl;
    		cout<<"             * "<<"     "<< line <<"           ""*   " << endl;
			cout<<"              *                                 *   " << endl;	
    		cout<<"                *                             *    " << endl;
    		cout<<"                   * * * * * * * * * * * * *     " << endl;
    	      
	            goto a;	
				   		   
				}
    	       
    	       
    	       	else if(line == "display")
    			{
    				
    	    cout<<"             ******************************" << endl;
    	    cout<<"            *                            *" << endl;
            cout<<"           *                            *" << endl;
            cout<<"          * "<<"     "<<line<< ur <<" "   "*" << endl;
            cout<<"         *                            *" << endl;
            cout<<"        *                            *" << endl;
            cout<<"       ******************************" << endl;
            
               	goto a;
               	
			   }
               
               else if(line == "output")
    			{
    				
    	    cout<<"             ******************************" << endl;
    	    cout<<"            *                            *" << endl;
            cout<<"           *                            *" << endl;
            cout<<"          * "<<"     "<<line<< ur <<" "   "*" << endl;
            cout<<"         *                            *" << endl;
            cout<<"        *                            *" << endl;
            cout<<"       ******************************" << endl;
            
               	goto a;
               	
			   }
			   
			   else if(line == "accept")
    			{
    				
    	    cout<<"             ******************************" << endl;
    	    cout<<"            *                            *" << endl;
            cout<<"           *                            *" << endl;
            cout<<"          * "<<"     "<<line<<ur <<" "   "*" << endl;
            cout<<"         *                            *" << endl;
            cout<<"        *                            *" << endl;
            cout<<"       ******************************" << endl;
            
               	goto a;
               	
			   }
			   
               else if(line == "input")
    			{
    				
    	    cout<<"             ******************************" << endl;
    	    cout<<"            *                            *" << endl;
            cout<<"           *                            *" << endl;
            cout<<"          * "<<"     "<<line<<ur <<" "   "*" << endl;
            cout<<"         *                            *" << endl;
            cout<<"        *                            *" << endl;
            cout<<"       ******************************" << endl;
            
               	goto a;
               	
			   }
               
               
               else if(line == "enter")
    			{
    				
    	    cout<<"             ******************************" << endl;
    	    cout<<"            *                            *" << endl;
            cout<<"           *                            *" << endl;
            cout<<"          *"<<"     "<<line<<ur <<" "   "*" << endl;
            cout<<"         *                            *" << endl;
            cout<<"        *                            *" << endl;
            cout<<"       ******************************" << endl;
            
              	goto a;
			   
	         	}
		
		
		        else if(line == "process")
            	{  
			
				
         	cout<<"            *******************************" << endl;
    		cout<<"            *                             *" << endl;
    		cout<<"            *                             *" << endl;
    		cout<<"            *"<<"     "<<ur <<"        *" << endl;
    		cout<<"            *                             *" << endl;
    		cout<<"            *                             *" << endl;	
    		cout<<"            *******************************" << endl;
    		
    			goto a;
    	
               }
               
    		
			
    	        else if(line == "do")
				{
					
    		cout<<"            *******************************" << endl;
    		cout<<"            *                             *" << endl;
    		cout<<"            *                             *" << endl;
    		cout<<"            *"<<"     "<< line << ur <<"        *" << endl;
    		cout<<"            *                             *" << endl;
    		cout<<"            *                             *" << endl;	
    		cout<<"            *******************************" << endl;
    
    		    goto a;
    		    
             	}
            	
            
               
    	 		 else if(line == "if")
    	 		 {
    	 		 	getline(cin,line1);
    	 		 	getline(cin,line2);
								cout<<"\t \t          /  \\      "<<endl;
             cout<<"\t \t         /    \\             "<<endl;
            cout<<"\t \t        /      \\       "<<endl;
            cout<<"\t \t       /        \\       "<<endl;
            
            cout<<"        ==============/  "<<line<<ur<<"        \\================ "<<endl;
            cout<<"        ||            \\          /                ||   "<<endl;
            cout<<"        ||             \\        / 	          ||             		 "<<endl;
            cout<<"        ||              \\      /     	          ||  "<<endl;
            cout<<"        ||               \\    /       	          ||  "<<endl;
            cout<<"        ||                \\  /         	 	  ||"<<endl;
			cout<<"        \\/                                        \\/	"<<endl;
			cout<<"        yes                                        no        "<<endl;
            cout<<"    ====================               ====================="<<endl;
            cout<<"    |                  |               |                   |"<<endl;
            cout<<"    |"<<line1<<"                        "<<line2<<"          "<<endl;
            cout<<"    |                  |               |                   |         "<<endl; 				 
            cout<<"    ====================               =====================         "<<endl;
 			cout<<"           ||                                    ||"<<endl;
            cout<<"           ||                                    ||"<<endl;
            cout<<"           ||                                    ||"<<endl;
            cout<<"           ||                                    ||"<<endl; 				 
            cout<<"           ||===============(c)==================||       "<<endl;
										        	
                  goto a;
                  
				  }
					
					else if(line == "check")
    	 		 {
    	 		 	getline(cin,line1);
    	 		 	getline(cin,line2);
								cout<<"\t \t          /  \\      "<<endl;
             cout<<"\t \t         /    \\             "<<endl;
            cout<<"\t \t        /      \\       "<<endl;
            cout<<"\t \t       /        \\       "<<endl;
            
            cout<<"        ==============/  "<<line<<"        \\================ "<<endl;
            cout<<"        ||            \\          /                ||   "<<endl;
            cout<<"        ||             \\        / 	          ||             		 "<<endl;
            cout<<"        ||              \\      /     	          ||  "<<endl;
            cout<<"        ||               \\    /       	          ||  "<<endl;
            cout<<"        ||                \\  /         	 	  ||"<<endl;
			cout<<"        \\/                                        \\/	"<<endl;
			cout<<"        yes                                        no        "<<endl;
            cout<<"    ====================               ====================="<<endl;
            cout<<"    |                  |               |                   |"<<endl;
            cout<<"    |"   <<line1<<"                        "<<line2<<"          "<<endl;
            cout<<"    |                  |               |                   |         "<<endl; 				 
            cout<<"    ====================               =====================         "<<endl;
 			cout<<"           ||                                    ||"<<endl;
            cout<<"           ||                                    ||"<<endl;
            cout<<"           ||                                    ||"<<endl;
            cout<<"           ||                                    ||"<<endl; 				 
            cout<<"           ||===============(c)==================||       "<<endl;
										        	
                  goto a;
                  
				  }
							
				
                 
    
    
    			else if(line == "end")
    			{
    			
    		cout<<"                   * * * * * * * * * * * * *     " << endl;
    		cout<<"                *                              *   " << endl;
    		cout<<"              *                                 *   " << endl;
    		cout<<"             *                                   *   " << endl;
    		cout<<"             *    "<<"     "<< line<<"        " "*   " << endl;
			cout<<"              *                                 *   " << endl;	
    		cout<<"                *                             *    " << endl;
    		cout<<"                   * * * * * * * * * * * * *     " << endl;
    		
				goto c;
				
 			    }






           }
           
       c:
       	
    
											cout<<"end forever";
											
											
										}
											
											
    			return 0;
    			
}
