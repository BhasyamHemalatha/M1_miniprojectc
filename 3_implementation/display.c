
void display_main_menu( )
{
  int r, c ;

  printf ( "Cars -&gt;\n" ) ;

  for ( r = 0 ; r &lt; 4 ; r++ )
  {
    if ( r == 2 )
		  printf ( "tricycle -&gt;\n" ) ;

    for ( c = 0 ; c &lt; 10 ; c++ )
      printf ( "%d\t", parking_information[r][c] ) ;
    printf ( "\n" ) ;
	}
}































