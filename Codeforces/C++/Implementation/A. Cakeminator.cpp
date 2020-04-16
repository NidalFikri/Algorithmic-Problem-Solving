    #include <bits/stdc++.h>
     
    using namespace std;
     
    int r , c ;
    int cnt = 0 ;   // counter to represent how many cells eaten.
    char arr[10][10] ;
     
    void check_row (int row)
    {
        for (int i = 0 ; i < c ; i++)
        {
            if (arr[row][i] == 'S') return  ;   //Go out of the scope. Can not eat this row.
        }
     
        //Let's eat this row cuz it's can be eaten .
        for (int i = 0 ; i < c ; i++)
        {
            if (arr[row][i] != 'X') {arr[row][i] = 'X' ; cnt++;}     //Mark cell as 'X' = eaten. Counter ++
        }
     
    }
     
    void check_column (int column)
    {
        for (int i = 0 ; i < r ; i++)
        {
            if (arr[i][column] == 'S') return  ;   //Go out of the scope. Can not eat this column.
        }
     
        //Let's eat this column cuz it's can be eaten .
        for (int i = 0 ; i < r ; i++)
        {
            if (arr[i][column] != 'X') {arr[i][column] = 'X' ; cnt++;}     //Mark cell as 'X' = eaten. Counter ++
        }
    }
     
     
    int main(int argc , char * argv [])
    {
     
        cin >> r >> c ;
     
        for (int i = 0 ; i < r ; i++)
        {
            for (int j = 0 ; j < c ; j++)
            {
                cin >> arr[i][j];
            }
        }
     
        //check all rows.
        for (int i = 0 ; i < r ; i++)
        {
            check_row(i) ;
        }
     
        //check all columns.
        for (int i = 0 ; i < c ; i++)
        {
            check_column(i) ;
        }
     
        cout<<cnt;;
     
    //Uncomment this code to see the 2D array after being eaten.    
     /*
     cout<<endl;
     for (int i = 0 ; i < r ; i++)
        {
            for (int j = 0 ; j < c ; j++)
            {
                cout << arr[i][j];
            }
            cout<<endl;
        }*/
        
       return 0;
    }
