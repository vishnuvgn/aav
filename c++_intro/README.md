# Basics of C++

so you've written your c++ code (.cpp) but you don't know how to compile and run it? 
Well, follow these steps. In the terminal:

1) navigate to the folder where your code lives
2) run this command: g++ -o output_file_name source_file.cpp
    - for instance, for hello_world.cpp: g++ -o hello_world hello_world.cpp
    - NOTE: you can name your output file (which is an executable) whatever you want, but it probably makes sense to just name it the same as your .cpp file. But hey, maybe your clinically insane and don't want to. It's a free country.
3) in the terminal, run  ./output_file_name (ex: ./hello_world)

i didn't include windows because fuck windows