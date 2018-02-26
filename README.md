# RT

*by nthibaud, cpierre and bvan-dyc*

Complex Raytracer with multiple features and effects (listed below). Final Project of 42's graphic branch.

## Usage
```
git clone https://github.com/bvan-dyc/RTv1 ~/RTv1
cd ~/RTv1
```
render a file with: 		`./rt render <filename>`
create a new empty map using:	`./rt create <filename>` -> *map is saved in map/*
move around rendered file with:	`./rt edit <filename>`
switch between render and edit with 'r'

![rt6sP1CoCyPerl](https://preview.ibb.co/iYdZdH/Screen_Shot_2018_02_26_at_11_58_43.png "Render example")

## Features

- Rendering
	* shapes
		* plane
		* sphere
		* cylinder
		* cone
		* disk
		* triangle
		* hyperboloid
		* paraboloid
		* pyramid
		* quadrangle
		* parallelogram
	* limited shapes
	* negative space objects
	* loading bar
	* shadows
	* multiple lights, overlapping shadows
	* ambient light
	* specular light
	* reflexions
	* refractions
	* transparency
	* texture mapping (.jpeg / .png / .bmp)
	* procedural textures (perlin, marble, chess)
	* procedural bump mapping (perlin noise)
	* filters (cellshading, smooth, grayscale, sepia, inverted)
	* skybox
	* render image saving
	* multithreading
