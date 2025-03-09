echo Enter radius: 
read radius
area=0
circumference=0
area=$(echo "3.14 * $radius * $radius" | bc)
circumference=$(echo "2 * 3.14 * $radius" | bc)
echo "Area: $area"
echo "Circumference: $circumference"