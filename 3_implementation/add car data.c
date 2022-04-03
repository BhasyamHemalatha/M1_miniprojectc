 if ( car_type == CAR || car_type == TRICYCLE )
				  {
					  getting_free_column_row ( car_type, tarr ) ;

					  if ( tarr[0] != -1 &amp;&amp; tarr[1] != -1 )
					  {
						  car_row = tarr[0] ;
						  car_column = tarr[1] ;

              if ( car_type == CAR )
                car[car_row][car_column] =  add ( car_type, number, car_row, car_column ) ;
              else
							  tricycle[car_row - 2][car_column] = add ( car_type, number, car_row, car_column ) ; ;
            }



























