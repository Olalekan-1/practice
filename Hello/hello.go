package main

import "fmt"

/* func main() { 
	var b int = 20
	for b =0; b <10; b++ {
		fmt.Printf("run")
	};

	while b < 10
} */

/* func main() {
	for i:=0; i < 5; i++ {
		fmt.Println(i)
	  } */
// }

/* func main() {
	fmt.Print("what is your name? ")
} */
func main() {
	 fmt.Print("What is your first name? ")
	var response string
	fmt.Scan(&response)
	fmt.Printf("Hello, %v!\n", response)

	 
	/* fmt.Print("danges")
	var gat string
	
	n, err := fmt.Scan(&gat)
	fmt.Println("th number of sucessfully scanned:", n, "Error:", err)
	fmt.Println("how are you, %v\n", gat)
	 */

/* 
	var s1 string
	var s2 string
fmt.Print("The goods are:")
//  n, err :=  fmt.Scan(&s1, &s2)
// fmt.Println("th number of sucessfully scanned:", n, "Error:", err)
// fmt.Println("first:",s1, "second:", s2)
//  */

 /* var applenum int

 fmt.Printf(" Number of Apple?")
 fmt.Scan(&applenum)
 fmt.Printf("The number of apple is :", applenum)
 */
/* var x[5] int
x[1]=12
x[0]= 13
fmt.Printfx[1],"\n", x[0]) */


/* y := [...] int {16, 27, 44, 67,}
for t, k := range y {fmt.Printf("index:%d value:%d\n", t, k)} */

/* a := [...] string {"yam", "egg", "Macaroni", "bread", "fish", "indomie", "spagetti"}
for k, y := range a {fmt.Printf("index :%d value:%s\n", k, y)}
s1 := a[1:4]
s2 :=a[3:7]
s1 = append( s1, "groundnut", "beans")

s1[2] = "moimoi"
fmt.Printf("slices are:%s\n", s1)
fmt.Printf("slices are:%s\n", s2)
fmt.Printf("%s", a) */
  }