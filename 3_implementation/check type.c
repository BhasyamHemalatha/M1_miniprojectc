while ( car_type != CAR &amp;&amp; car_type != TRICYCLE )
          {
  printf ( "Enter vehicle type (1 for Car / 2 for tricycle ): \n" ) ;
            scanf ( "%d", &amp;car_type ) ;
          if ( car_type != CAR &amp;&amp; car_type != TRICYCLE )
  printf ( "\nInvalid vehicle type.\n" ) ;
          }