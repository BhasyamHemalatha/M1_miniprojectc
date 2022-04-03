#define TRICYCLE
void getting_free_column_row ( int car_type, int *arr )
{
  int r, c, fromrow = 0, torow = 2,lt ;
  char parking_information[r][c];

  if ( car_type == TRICYCLE)
  {
    fromrow += 2 ;
    torow += 2;
  }

	for ( r = fromrow ; r &lt; torow ; r++ )
	{
		for ( c = 0 ; c &lt; 10 ; c++ )
		{
			if ( parking_information[r][c] == 0 )
			{
				arr[0] = r ;
				arr[1] = c ;
        return ;
			}
		}
	}

	if ( r == 2 || r == 4 )
	{
   	arr[0] = -1 ;
    arr[1] = -1 ;
  }
}






















































