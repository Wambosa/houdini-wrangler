# houdini-wrangler
Whilst making the game https://steelpinion.com/  
We need a place to store this growing list of scripts within houdini; typically for wrangle nodes, but could include full `.hip` files too

## How to use
Create an attribute wrangle node, and copy the respective file contents into your node's text field.
Note: That each script will have its own input expectations. 
_Remember Houdini isn't magic, it's input/output._


## Video Responses with .hip files
The `./youtube` folder will be a collection of `.hip` files correlated with various youtube videos posted for the SteelPinion project.

### Other Notes

I am not 100% certain how to encode vex scripts outside of houdini, but my understanding is that they are essentially `c` scripts. So that is the file extension that will be used for vex.

https://www.sidefx.com/docs/houdini/vex/lang.html
