
void car_delete ( struct car_management *v )
{
  int c ;

	parking_information[v -&gt; car_row][v -&gt; car_column] = 0 ;

	if ( v -&gt; car_type == CAR )
    car_counting-- ;
  else
    tricycleCount-- ;

	vehicle_counting-- ;
	backward_upward();
}

























