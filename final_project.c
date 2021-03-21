#include<stdio.h>
#include<stdlib.h>
int start();
void genres();
void sci_fi();
void mystery();
void religion();
void romance();
void fiction();
void cart();
void address();
void payment ();
int p[31];
int a[31];
int h=0;
char str[100];
void main()
{  address();
    start();
    genres();
    cart();
    payment();
}


int start()
{system("clear");
system("cls");
    int a;
printf( "                                   _____________________________________________________________________________________________________________");
printf("\n                                   |                                                                                                           |");
printf("\n                                   |                                                                                                           |");
printf("\n                                   |                                                                                                           |");
printf("\n                                   |                                                                                                           |");
printf("\n                                   |                               |||||||||    IMAGINE ONLINE BOOK STORE   |||||||||                          |");
printf("\n                                   |                                                                                                           |");
printf("\n                                   |                                  GET A BOOK and GIVE YOUR MIND A NEW OUTLOOK                              |");
printf("\n                                   |                                                                                                           |");
printf("\n                                   |                                           AVAILABLE GENRES : Religion                                     |");
printf("\n                                   |                                                              Sci-Fi                                       |");
printf("\n                                   |                                                              Mystery                                      |");
printf("\n                                   |                                                              Romance                                      |");
printf("\n                                   |                                                              Fiction                                      |");
printf("\n                                   |                                                                                                           |");
printf("\n                                   | Enter 1 to continue                                                                                       |");
printf("\n                                   | Enter 0 to exit                                                                   (:  HAPPY SHOPPING  :)  |");
printf("\n                                   |                                                                                                           |\n");
  printf("                                   |___________________________________________________________________________________________________________|\n");

scanf("%d",&a);
if(a==0)
{
    exit(0);
}
else{
    if(a==1)
{
  return 0;
}

else{
printf(" Wrong input");
start();
}
}
}


void genres()

{system("clear");
system("cls");
    int c;
    printf("Genres \n 1) Religion \n 2) Sci-fi \n 3) Mystery \n 4) Romance \n 5) fiction \n");
    printf("Enter 0 to exit\n");
    printf("Enter your choice\n");
    scanf("%d",&c);
    switch(c)
       {
        case 1: religion();
                break;
        case 2: sci_fi();
                  break;
        case 3: mystery();
                  break;
        case 4: romance();
                 break;
        case 5: fiction();
                 break;
        case 0: exit(0);
                break;         
        default : printf("Wrong Input!, Input again\n");
                   genres();
                   break;
        }
    
    
}

//Religion
void religion()
{system("clear");
system("cls");

int ans;
     
     printf("\n ______________________________");
     printf("\n|                              |");
     printf("\n|         *The Secret*         |");
     printf("\n|                              |"); 
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|        *Rhonda Byrne*        |");
     printf("\n|                              |");
     printf("\n|______________________________|\n");
     printf("\nDescription : The Secret is a 2006 self-help book by Rhonda Byrne, based on the earlier film of the same name. It is based on the belief of the law of attraction, which claims that thoughts can change a person's life directly.\n ");
     printf( "\nPrice : Rs 285 \n ");
     

     printf("\nEnter 1 to add this book in cart\n");
     printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
     printf("Enter 9 to go to other genre ");
    printf("                                                                                                            Enter 7 to go to cart\n");
     printf("Enter 0 to exit\n ");
    scanf("%d",&ans);

    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=1;
    p[h] = 285;
    h++;}
    if(ans == 9)
    {
        genres();
        
    }
    if(ans == 7)
{
        cart();
         payment();
    }
    if(ans == 0)
    {
        exit(0);
    }

   printf("\n\n");

     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|     *The Art of Happiness*    |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|         *Dalai Lama*          |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The Art of Happiness is a highly accessible guide for a western audience, combining the Dalai Lama's eastern spiritual tradition with Dr Howard C. Cutler's western perspective.\n" );
     printf("\nPrice : Rs 130 \n");
     


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre ");
    printf("                                                                                                            Enter 7 to go to cart\n");

     printf("Enter 0 to exit\n ");
     scanf("%d",&ans);

    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=2;
    p[h] = 130;
    h++;}
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 7)
{
        cart();
      payment();
    }
    if(ans == 0)
    {
        exit(0);
    }

   printf("\n\n");



     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|         *The Prophet*         |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|        *Kahlil Gibran*        |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The Prophet is a book of 26 prose poetry fables written in English by the Lebanese-American poet and writer Kahlil Gibran. It was originally published in 1923 by Alfred A. Knopf.\n" );
     printf("\nPrice : Rs 240 \n");
     


    printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre ");
    printf("                                                                                                            Enter 7 to go to cart\n");
    printf("Enter 0 to exit\n ");
     scanf("%d",&ans);

    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=3;
    p[h] = 240;
    h++;}
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");



     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|          *Waking Up*          |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|          *Sam Harris*         |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription :  Waking Up: A Guide to Spirituality Without Religion is a 2014 book by Sam Harris that discusses a wide range of topics including secular spirituality, the illusion of the self, psychedelics, and meditation. He attempts to show that a certain form of spirituality is integral to understanding the nature of the mind\n" );
     printf("\nPrice : Rs 280 \n");
    


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre");
    printf("                                                                                                            Enter 7 to go to cart\n");
    printf("Enter 0 to exit\n ");
     scanf("%d",&ans);

    if(ans==1)
   { printf("\nBook added to cart");
    a[h]=4;
    p[h] = 280;
    h++;}
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");



     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|       *The Great Divorce*     |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|          *CS Lewis*           |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The Great Divorce is a novel by the British author C. S. Lewis, published in 1945, and based on a theological dream vision of his in which he reflects on the Christian conceptions of Heaven and Hell. The working title was Who Goes Home? but the final name was changed at the publisher's insistence.\n" );
     printf("\nPrice : Rs 400 \n");
     


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre");
    printf("                                                                                                            Enter 7 to go to cart\n");
printf("Enter 0 to exit\n ");
     scanf("%d",&ans);

    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=5;
    p[h] = 400;
    h++;}
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");


}

//Sci-fi
void sci_fi()
{ system("clear");
system("cls");

int ans;
     
     printf("\n ______________________________");
     printf("\n|                              |");
     printf("\n|      *The Time Machine*      |");
     printf("\n|                              |"); 
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|          *HG Wells*          |");
     printf("\n|                              |");
     printf("\n|______________________________|\n");
     printf("\nDescription : The Time Machine is a science fiction novella by H. G. Wells, published in 1895 and written as a frame narrative. The work is generally credited with the popularization of the concept of time travel by using a vehicle or device to travel purposely and selectively forward or backward through time.\n ");
     printf( "\nPrice : Rs 130 \n ");
     

     printf("\nEnter 1 to add this book in cart\n");
     printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
     printf("Enter 9 to go to other genre ");
     printf("                                                                                                            Enter 7 to go to cart\n");

     printf("Enter 0 to exit\n ");
     scanf("%d",&ans);

    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=11;
    p[h] = 130;
    h++;}
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");


     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|       *Frankenstein*          |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|       *Mary Shelley*          |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : Frankenstein or The Modern Prometheus is an 1818 novel written by English author Mary Shelley. Frankenstein tells the story of Victor Frankenstein, a young scientist who creates a sapient creature in an unorthodox scientific experiment.\n" );
     printf("\nPrice : Rs 110 \n");
   


    printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre");
    printf("                                                                                                            Enter 7 to go to cart\n");

    printf("Enter 0 to exit\n ");
     scanf("%d",&ans);

    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=12;
    p[h] = 110;
    h++;}
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans == 7)
{
        cart();
      payment();

    }
   printf("\n\n");



     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|           *Hyperion*          |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|          *Dan Simmons*        |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : Hyperion is a Hugo Award-winning 1989 science fiction novel by American writer Dan Simmons. It is the first book of his Hyperion Cantos. The plot of the novel features multiple time-lines and characters. It follows a similar structure to The Canterbury Tales by Geoffrey Chaucer.\n" );
     printf("\nPrice : Rs 350 \n");
   


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre");
    printf("                                                                                                            Enter 7 to go to cart\n");

     printf("Enter 0 to exit\n ");
     scanf("%d",&ans);

    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=13;
    p[h] = 350;
    h++;}
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans == 7)
{
        cart();
      payment();

    }
   printf("\n\n");



     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|           *Red Mars*          |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|     *Kim Stanley Robinson*    |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : All three volumes of the worldwide bestselling Mars trilogy. Mars - the barren, forbidding planet that epitomises mankind’s dreams of space conquest.\n" );
     printf("\nPrice : Rs 585 \n");
     


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre ");
    printf("                                                                                                            Enter 7 to go to cart\n");
     printf("Enter 0 to exit\n ");
     scanf("%d",&ans);

    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=14;
    p[h] = 585;
    h++;}
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans == 7)
{
        cart();
      payment();

    }
   printf("\n\n");



     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|       *A Wrink In Time*       |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|      *Madeleine L'engle*      |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : A Wrinkle in Time is a young adult novel written by American author Madeleine L'Engle. First published in 1962, the book has won the Newbery Medal, the Sequoyah Book Award, the Lewis Carroll Shelf Award, and was runner-up for the Hans Christian Andersen Award.\n" );
     printf("\nPrice : Rs 245 \n");
    


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9 and 0 to see next book\n");
    printf("Enter 9 to go to other genre");
    printf("                                                                                                            Enter 7 to go to cart\n");
     printf("Enter 0 to exit\n ");
     scanf("%d",&ans);

    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=15;
    p[h] = 245;
    h++;}
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans == 7)
{
        cart();
      payment();

    }
   printf("\n\n");


}

//Mystery
void mystery()
{ system("clear");
system("cls");
int ans;
     
     
     printf("\n ______________________________");
     printf("\n|                              |");
     printf("\n|      *The Da Vinci Code*     |");
     printf("\n|                              |"); 
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|          *Dan Brown*         |");
     printf("\n|                              |");
     printf("\n|______________________________|\n");
     printf("\nDescription : The Da Vinci Code is a 2003 mystery thriller novel by Dan Brown. It is Brown's second novel to include the character Robert Langdon: the first was his 2000 novel Angels & Demons.\n ");
     printf( "\nPrice : Rs 200 \n ");
    

     printf("\nEnter 1 to add this book in cart\n");
     printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre");
         printf("                                                                                                            Enter 7 to go to cart\n");
printf("Enter 0 to exit\n ");
     scanf("%d",&ans);
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=21;
    p[h] = 200;
    h++;}
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");


     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|       *The Lost Symbol*       |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|          *Dan Brown*          |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The Lost Symbol is a 2009 novel written by American writer Dan Brown. It is a thriller set in Washington, D.C., after the events of The Da Vinci Code, and relies on Freemasonry for both its recurring theme and its major characters.\n" );
     printf("\nPrice : Rs 260 \n");
   


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre\n ");
    printf("                                                                                                            Enter 7 to go to cart\n");
    printf("Enter 0 to exit\n ");
     scanf("%d",&ans);
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }

    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=22;
    p[h] = 260;
    h++;}
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");


     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|     *The Silence of Lambs*    |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|        *Thomas Harris*        |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The Silence of the Lambs is a psychological horror novel by Thomas Harris. First published in 1988, it is the sequel to Harris's 1981 novel Red Dragon. Both novels feature the cannibalistic serial killer Dr. Hannibal Lecter, this time pitted against FBI Special Agent Clarice Starling.\n" );
     printf("\nPrice : Rs 315 \n");
     


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre ");
    printf("                                                                                                            Enter 7 to go to cart\n");
    printf("Enter 0 to exit\n ");
     scanf("%d",&ans);
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=23;
    p[h] = 315;
    h++;}
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");



     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|            *Misery*           |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|          *Stephen King*       |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : Misery is an American psychological horror thriller novel written by Stephen King and first published by Viking Press on June 8, 1987. The novel's narrative is based on the relationship of its two main characters – the popular writer Paul Sheldon and his psychotic fan Annie Wilkes.\n" );
     printf("\nPrice : Rs 355 \n");
    


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre\n ");
         printf("                                                                                                            Enter 7 to go to cart\n");
printf("Enter 0 to exit\n ");
     scanf("%d",&ans);
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=24;
    p[h] = 355;
    h++;}
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");


     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|     *The Moonlight Child*     |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|      *Karen McQuestion*       |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : A gripping and emotional novel that will leave you wondering about the neighbors next door...On a cold January night, Sharon Lemke heads outside to see a lunar eclipse when she notices something odd at the house behind her backyard.\n" );
     printf("\nPrice : Rs 370 \n");
    


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre\n ");
         printf("                                                                                                            Enter 7 to go to cart\n");
printf("Enter 0 to exit\n ");
     scanf("%d",&ans);
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=25;
    p[h] = 370;
    h++;}
    if(ans == 7)
{
        cart();
      payment();

    }

}

//Romance
void romance()
{ system("clear");
system("cls");
int ans;
    
     printf("\n ______________________________");
     printf("\n|                              |");
     printf("\n|   *The Fault In Our Stars*   |");
     printf("\n|                              |"); 
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|          *JOHN GREEN*        |");
     printf("\n|                              |");
     printf("\n|______________________________|\n");
     printf("\nDescription : A novel of life and death and the people caught in between. The Fault in Our Stars is John Green at his best.\n ");
     printf( "\nPrice : Rs 130 \n ");
     

     printf("\nEnter 1 to add this book in cart\n");
     printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre ");
    printf("                                                                                                            Enter 7 to go to cart\n");
    printf("Enter 0 to exit\n ");
     scanf("%d",&ans);

    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=31;
    p[h] = 130;
    h++;}
     if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");


     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|       *The Wedding Date*      |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|       *JASMINE GUILLORY*      |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : A groomsman and his last-minute guest are about to discover if a fake date can go the distance in a fun and flirty debut novel.\n" );
     printf("\nPrice : Rs 600 \n");
    


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre");
    printf("                                                                                                            Enter 7 to go to cart\n");
     printf("Enter 0 to exit\n ");
     scanf("%d",&ans);

    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=32;
    p[h] = 600;
    h++;}
     if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");



     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|       *The Proposal*          |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|     *JASMINE GUILLORY*        |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The author of The Wedding Date serves up a novel about what happens when a public proposal doesn't turn into a happy ending, thanks to a woman who knows exactly how to make one on her own.\n" );
     printf("\nPrice : Rs 338 \n");
    


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre ");
    printf("                                                                                                            Enter 7 to go to cart\n");
    printf("Enter 0 to exit\n ");
     scanf("%d",&ans);
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=33;
    p[h] = 338;
    h++;}
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");



     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|    *The Princess Bride*       |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|     *WILLIAM GOLDMAN*         |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The Princess Bride is a 1973 fantasy romance novel by American Writer William Goldman. The book combines elements of comedy,adventure,fantasy,drama,romance,and fairy tale. It is presented as an abridgement of a longer work by the fictional S.Morgenstern, and Goldman's 'commentary' asides are constant throughout.\n" );
     printf("\nPrice : Rs 223 \n");
     


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre ");
    printf("                                                                                                            Enter 7 to go to cart\n");
    printf("Enter 0 to exit\n ");
     scanf("%d",&ans);
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=34;
    p[h] = 223;
    h++;}
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");



     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|     *Beautiful Disaster*      |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|      *JAMIE McGUIRE*          |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : A Wrinkle in Time is a young adult novel written by American author Madeleine L'Engle. First published in 1962, the book has won the Newbery Medal, the Sequoyah Book Award, the Lewis Carroll Shelf Award, and was runner-up for the Hans Christian Andersen Award.\n" );
     printf("\nPrice : Rs 210 \n");
    


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre ");
    printf("                                                                                                            Enter 7 to go to cart\n");
    printf("Enter 0 to exit\n ");
     scanf("%d",&ans);
 if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=35;
    p[h] = 210;
    h++;}
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");


}

//fiction
void fiction()
{system("clear");
system("cls");
int ans;
     
     printf("\n ______________________________");
     printf("\n|                              |");
     printf("\n|        *Jane Eyre*           |");
     printf("\n|                              |"); 
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|       *CHARLOTTE BRONTE*     |");
     printf("\n|                              |");
     printf("\n|______________________________|\n");
     printf("\nDescription :  Jane Eyre is a novel by English writer Charlotte Bronte,published under the pen name 'Currrer Bell', on 16 October 1847, by Smith,Elder & Co. of London. The first American edition was published the following year by Harper & Brothers of New York.\n ");
     printf( "\nPrice : Rs 155 \n ");
     

     printf("\nEnter 1 to add this book in cart\n");
     printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
     printf("Enter 9 to go to other genre ");
     printf("                                                                                                            Enter 7 to go to cart\n");
     printf("Enter 0 to exit\n ");
     scanf("%d",&ans);
if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans==41)
   { printf("\nBook added to cart\n");
    a[h]=1;
    p[h] = 155;
    h++;}
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");


     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|       *Little Women*          |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|      *LOUISA MAY ALOTT*       |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : Generations of readers young and old,male and female, have fallen in love with the March sisters of Louisa May Alcott's most popular and enduring novel,Little Women. Here are talented tomboy and author-to-be Jo,tragically frail Beth, beautiful Meg, and romantic, spoiled Army, united in their devotio to each other.\n" );
     printf("\nPrice : Rs 160 \n");
     


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
    printf("Enter 9 to go to other genre ");
     printf("                                                                                                            Enter 7 to go to cart\n");
     printf("Enter 0 to exit\n ");
      scanf("%d",&ans);

    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=42;
    p[h] = 160;
    h++;}
if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans == 7)
{
        cart();
      payment();

    }
   printf("\n\n");


     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|     *Invisible Man*           |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|        *HG WELLS*             |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The Invisible Man is a science fiction novel by H.G.Wells.A gripping and entertaining tale of terror and suspense as well as a potent Faustian allergory of hubris and science run amok.\n" );
     printf("\nPrice : Rs 130 \n");
     


     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0  to see next book\n");
     printf("Enter 9 to go to other genre ");
     printf("                                                                                                            Enter 7 to go to cart\n");
     printf("Enter 0 to exit\n ");
     scanf("%d",&ans);
if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=43;
    p[h] = 130;
    h++;}
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");


     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|    *Pride And Prejudice*      |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|          *JANE AUSTEN*        |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The novel follows the character development of Elizabeth Bennet, the dynamic protagonist of the book who learns about the repercussions of hasty judgements and comes to appreciate the difference between superficial goodness and actual goodness. Its humour lies in its honest depiction of manners,education,marriage, and money during the Regency era in Great Britain.\n" );
     printf("\nPrice : Rs 100 \n");
     

     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0  to see next book\n");
     printf("Enter 9 to go to other genre ");
     printf("                                                                                                            Enter 7 to go to cart\n");
     printf("Enter 0 to exit\n ");
     scanf("%d",&ans);
if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=44;
    p[h] = 100;
    h++;}
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");



     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|         *Catch-22*            |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|      *JOSEPH HELLER*          |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : Set in Italy during World War 2,this is the story of the incomparable, malingering bombardier, Yossarian, a hero who is furious because thousands of people he has never met are trying to kill him. But his real problem is not the enemy-it is his own army,which keeps increasing the number of missions the men must fly to complete their service.\n" );
     printf("\nPrice : Rs 350 \n");
     

     printf("\nEnter 1 to add this book in cart\n");
    printf("Enter any no. other than 1,9,7 and 0 to see next book\n");
     printf("Enter 9 to go to other genre ");
     printf("                                                                                                            Enter 7 to go to cart\n");
     printf("Enter 0 to exit\n ");
     scanf("%d",&ans);
if(ans == 9)
    {
        genres();
    
    }
    if(ans == 0)
    {
        exit(0);
    }
    if(ans==1)
   { printf("\nBook added to cart\n");
    a[h]=45;
    p[h] = 350;
    h++;}
    if(ans == 7)
{
        cart();
      payment();

    }

   printf("\n\n");


}

void cart()
{system("clear");
system("cls");
    printf("                      ********************************************YOUR CART*****************************************\n\n\n");

    int i=0;

printf("Books in your cart :\n\n");


//Religion

if(a[i]==1)
   { printf("\n ______________________________");
     printf("\n|                              |");
     printf("\n|         *The Secret*         |");
     printf("\n|                              |"); 
     printf("\n|                              |");
     printf("\n|        *Rhonda Byrne*        |");
     printf("\n|                              |");
     printf("\n|______________________________|\n");
     printf("\nDescription : The Secret is a 2006 self-help book by Rhonda Byrne, based on the earlier film of the same name. It is based on the belief of the law of attraction, which claims that thoughts can change a person's life directly.\n ");
     printf( "\nPrice : Rs 285 \n ");
     i++;
   printf("\n\n");
   }
if(a[i]==2)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|     *The Art of Happiness*    |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|         *Dalai Lama*          |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The Art of Happiness is a highly accessible guide for a western audience, combining the Dalai Lama's eastern spiritual tradition with Dr Howard C. Cutler's western perspective.\n" );
     printf("\nPrice : Rs 130 \n");
     i++;
   printf("\n\n");
}

if(a[i]==3)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|         *The Prophet*         |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|        *Kahlil Gibran*        |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The Prophet is a book of 26 prose poetry fables written in English by the Lebanese-American poet and writer Kahlil Gibran. It was originally published in 1923 by Alfred A. Knopf.\n" );
     printf("\nPrice : Rs 240 \n");
     i++;
     printf("\n\n");
}
if(a[i]==4)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|          *Waking Up*          |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|          *Sam Harris*         |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription :  Waking Up: A Guide to Spirituality Without Religion is a 2014 book by Sam Harris that discusses a wide range of topics including secular spirituality, the illusion of the self, psychedelics, and meditation. He attempts to show that a certain form of spirituality is integral to understanding the nature of the mind\n" );
     printf("\nPrice : Rs 280 \n");
     i++;
   printf("\n\n");
}

if(a[i]==5)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|       *The Great Divorce*     |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|          *CS Lewis*           |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The Great Divorce is a novel by the British author C. S. Lewis, published in 1945, and based on a theological dream vision of his in which he reflects on the Christian conceptions of Heaven and Hell. The working title was Who Goes Home? but the final name was changed at the publisher's insistence.\n" );
     printf("\nPrice : Rs 400 \n");
     i++;
   printf("\n\n");}


    //Sci-fi
     if(a[i]==11)
   { printf("\n ______________________________");
     printf("\n|                              |");
     printf("\n|      *The Time Machine*      |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|          *HG Wells*          |");
     printf("\n|                              |");
     printf("\n|______________________________|\n");
     printf("\nDescription : The Time Machine is a science fiction novella by H. G. Wells, published in 1895 and written as a frame narrative. The work is generally credited with the popularization of the concept of time travel by using a vehicle or device to travel purposely and selectively forward or backward through time.\n ");
     printf( "\nPrice : Rs 130 \n ");
     i++;
   printf("\n\n");}

if(a[i]==12)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|       *Frankenstein*          |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|       *Mary Shelley*          |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : Frankenstein or The Modern Prometheus is an 1818 novel written by English author Mary Shelley. Frankenstein tells the story of Victor Frankenstein, a young scientist who creates a sapient creature in an unorthodox scientific experiment.\n" );
     printf("\nPrice : Rs 110 \n");
     i++;

   printf("\n\n");}


if(a[i]==13)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|           *Hyperion*          |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|          *Dan Simmons*        |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : Hyperion is a Hugo Award-winning 1989 science fiction novel by American writer Dan Simmons. It is the first book of his Hyperion Cantos. The plot of the novel features multiple time-lines and characters. It follows a similar structure to The Canterbury Tales by Geoffrey Chaucer.\n" );
     printf("\nPrice : Rs 350 \n");
     i++;

   printf("\n\n");}


if(a[i]==14)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|           *Red Mars*          |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|     *Kim Stanley Robinson*    |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : All three volumes of the worldwide bestselling Mars trilogy. Mars - the barren, forbidding planet that epitomises mankind’s dreams of space conquest.\n" );
     printf("\nPrice : Rs 585 \n");
     i++;

   printf("\n\n");}


if(a[i]==15)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|       *A Wrink In Time*       |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|      *Madeleine L'engle*      |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : A Wrinkle in Time is a young adult novel written by American author Madeleine L'Engle. First published in 1962, the book has won the Newbery Medal, the Sequoyah Book Award, the Lewis Carroll Shelf Award, and was runner-up for the Hans Christian Andersen Award.\n" );
     printf("\nPrice : Rs 245 \n");
     i++;
   printf("\n\n");}

   //Mystery

if(a[i]==21)
   { printf("\n ______________________________");
     printf("\n|                              |");
     printf("\n|      *The Da Vinci Code*     |");
     printf("\n|                              |"); 
     printf("\n|                              |");
     printf("\n|          *Dan Brown*         |");
     printf("\n|                              |");
     printf("\n|______________________________|\n");
     printf("\nDescription : The Da Vinci Code is a 2003 mystery thriller novel by Dan Brown. It is Brown's second novel to include the character Robert Langdon: the first was his 2000 novel Angels & Demons.\n ");
     printf( "\nPrice : Rs 200 \n ");
     i++;

   printf("\n\n");}

if(a[i]==22)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|       *The Lost Symbol*       |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|          *Dan Brown*          |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The Lost Symbol is a 2009 novel written by American writer Dan Brown. It is a thriller set in Washington, D.C., after the events of The Da Vinci Code, and relies on Freemasonry for both its recurring theme and its major characters.\n" );
     printf("\nPrice : Rs 260 \n");
     i++;

   printf("\n\n");}


if(a[i]==23)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|     *The Silence of Lambs*    |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|        *Thomas Harris*        |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The Silence of the Lambs is a psychological horror novel by Thomas Harris. First published in 1988, it is the sequel to Harris's 1981 novel Red Dragon. Both novels feature the cannibalistic serial killer Dr. Hannibal Lecter, this time pitted against FBI Special Agent Clarice Starling.\n" );
     printf("\nPrice : Rs 315 \n");
     i++;

   printf("\n\n");}


if(a[i]==24)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|            *Misery*           |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|          *Stephen King*       |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : Misery is an American psychological horror thriller novel written by Stephen King and first published by Viking Press on June 8, 1987. The novel's narrative is based on the relationship of its two main characters – the popular writer Paul Sheldon and his psychotic fan Annie Wilkes.\n" );
     printf("\nPrice : Rs 355 \n");
     i++;

   printf("\n\n");}


if(a[i]==25)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|     *The Moonlight Child*     |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|      *Karen McQuestion*       |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : A gripping and emotional novel that will leave you wondering about the neighbors next door...On a cold January night, Sharon Lemke heads outside to see a lunar eclipse when she notices something odd at the house behind her backyard.\n" );
     printf("\nPrice : Rs 370 \n");
     i++;
   printf("\n\n");}

//Romance
 if(a[i]==31)
    {printf("\n ______________________________");
     printf("\n|                              |");
     printf("\n|   *The Fault In Our Stars*   |");
     printf("\n|                              |"); 
     printf("\n|                              |");
     printf("\n|          *JOHN GREEN*        |");
     printf("\n|                              |");
     printf("\n|______________________________|\n");
     printf("\nDescription : A novel of life and death and the people caught in between. The Fault in Our Stars is John Green at his best.\n ");
     printf( "\nPrice : Rs 130 \n ");
    i++;

   printf("\n\n");}

  if(a[i]==32)
  {
     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|       *The Wedding Date*      |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|       *JASMINE GUILLORY*      |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : A groomsman and his last-minute guest are about to discover if a fake date can go the distance in a fun and flirty debut novel.\n" );
     printf("\nPrice : Rs 600 \n");
    i++;
   printf("\n\n");}

   if(a[i]==33)
    { printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|       *The Proposal*          |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|     *JASMINE GUILLORY*        |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The author of The Wedding Date serves up a novel about what happens when a public proposal doesn't turn into a happy ending, thanks to a woman who knows exactly how to make one on her own.\n" );
     printf("\nPrice : Rs 338 \n");
    i++;

   printf("\n\n");}


if(a[i]==34)
{
     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|    *The Princess Bride*       |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|     *WILLIAM GOLDMAN*         |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The Princess Bride is a 1973 fantasy romance novel by American Writer William Goldman. The book combines elements of comedy,adventure,fantasy,drama,romance,and fairy tale. It is presented as an abridgement of a longer work by the fictional S.Morgenstern, and Goldman's 'commentary' asides are constant throughout.\n" );
     printf("\nPrice : Rs 223 \n");
    i++;
   printf("\n\n");}


if(a[i]==35)
{
     printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|     *Beautiful Disaster*      |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|      *JAMIE McGUIRE*          |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : A Wrinkle in Time is a young adult novel written by American author Madeleine L'Engle. First published in 1962, the book has won the Newbery Medal, the Sequoyah Book Award, the Lewis Carroll Shelf Award, and was runner-up for the Hans Christian Andersen Award.\n" );
     printf("\nPrice : Rs 210 \n");
    i++;
   printf("\n\n");
}


//fiction

 if(a[i]==41)
   { printf("\n ______________________________");
     printf("\n|                              |");
     printf("\n|        *Jane Eyre*           |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|                              |");
     printf("\n|       *CHARLOTTE BRONTE*     |");
     printf("\n|                              |");
     printf("\n|______________________________|\n");
     printf("\nDescription :  Jane Eyre is a novel by English writer Charlotte Bronte,published under the pen name 'Currrer Bell', on 16 October 1847, by Smith,Elder & Co. of London. The first American edition was published the following year by Harper & Brothers of New York.\n ");
     printf( "\nPrice : Rs 155 \n ");
     i++;
     printf("\n\n");
     }
if(a[i]==42)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|       *Little Women*          |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|      *LOUISA MAY ALOTT*       |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : Generations of readers young and old,male and female, have fallen in love with the March sisters of Louisa May Alcott's most popular and enduring novel,Little Women. Here are talented tomboy and author-to-be Jo,tragically frail Beth, beautiful Meg, and romantic, spoiled Army, united in their devotio to each other.\n" );
     printf("\nPrice : Rs 160 \n");
     i++;
printf("\n\n");
}
if(a[i]==43)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|     *Invisible Man*           |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|        *HG WELLS*             |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The Invisible Man is a science fiction novel by H.G.Wells.A gripping and entertaining tale of terror and suspense as well as a potent Faustian allergory of hubris and science run amok.\n" );
     printf("\nPrice : Rs 130 \n");
     i++;
     printf("\n\n");
}
if(a[i]==44)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|    *Pride And Prejudice*      |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|          *JANE AUSTEN*        |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : The novel follows the character development of Elizabeth Bennet, the dynamic protagonist of the book who learns about the repercussions of hasty judgements and comes to appreciate the difference between superficial goodness and actual goodness. Its humour lies in its honest depiction of manners,education,marriage, and money during the Regency era in Great Britain.\n" );
     printf("\nPrice : Rs 100 \n");
     i++;
     printf("\n\n");
}
if(a[i]==45)
{    printf("\n _______________________________");
     printf("\n|                               |");
     printf("\n|         *Catch-22*            |");
     printf("\n|                               |"); 
     printf("\n|                               |");
     printf("\n|                               |");
     printf("\n|      *JOSEPH HELLER*          |");
     printf("\n|                               |");
     printf("\n|_______________________________|\n");
     printf("\nDescription : Set in Italy during World War 2,this is the story of the incomparable, malingering bombardier, Yossarian, a hero who is furious because thousands of people he has never met are trying to kill him. But his real problem is not the enemy-it is his own army,which keeps increasing the number of missions the men must fly to complete their service.\n" );
     printf("\nPrice : Rs 350 \n");
     i++;
     printf("\n\n");
}

int total=0;
for(int i=0;i<h;i++)
{
  total+=p[i];
}
printf("                                  *   Your Total is : %d   *\n\n",total);

int u;
printf("Want to contiue : Enter any no. other than 0 and 5\n Exit : Enter 0\n You missed something!. Want to add more books in your cart : Enter 5 \n");

scanf("%d",&u);
if(u==0){
    exit(0);
}
if(u==5)
{
    genres();
    printf("                      ********************************************YOUR CART*****************************************\n\n\n");
    cart();
}
}

void address()
    {system("clear");
    system("cls");
     int m;
    printf("\nEnter your Address: ");
    gets(str);
    here :
    printf("\nYour delivery address is: %s\n", str);
    printf("Enter 1 :Continue with this address\n" );
  
    printf("Enter 0 :Exit\n" );
    scanf("%d",&m);
    switch(m)
    { 
        case 1:
                break;
        case 0:exit(0);
                break ;   
        default:printf("wrong input! Enter again\n");
                             goto here;
                             break;                   
    }

    }

void payment()
{system("clear");
system("cls");
    int total=0;
for(int i=0;i<h;i++)
{
  total+=p[i];
}
printf("\n\n\n                                                          Your Subtotal is : %d\n\n",total);
printf("                           Congratulation you avail 10 %% off on your first order.\n\n");
int tot = total*0.9;
printf("                                          After 10 %% off, your subtotal is : %d\n\n",tot);
printf("                                 Your order will be delivered to %s in 14 days ",str); 
printf("\n\n\n                                               *********** (: THANKS FOR SHOPPING WITH US, HAPPY READING!! :)  ************\n\n\n");
exit(0);
}
