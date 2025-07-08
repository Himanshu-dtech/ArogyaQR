for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*(rows-i)+1;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }