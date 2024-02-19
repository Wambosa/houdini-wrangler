// Houdini how to assign customizable colors in vertex for Unreal 5 GOOSE SESSION 3
// video: https://youtu.be/wb9azQvYdRM
// ----------------------------------------------------------
// INPUT SETTINGS
// input 1: {your geometry with point groups c_1 c_2 c_3 c_n}
// run over: points
// ----------------------------------------------------------

v@Cd_v = { 0, 0, 0};
v@uv = { 0, 0, 0 };

// -----------------
// OTHER USAGE NOTES
// use before assigning color IDs to the red channel (stuff-colorId-into-vector-red-channel)
// this technique doesn't require UVs and so we erase them to save on export size

// WARN: unity/unreal does not appear to support color alpha
// f@Alpha_v = 1.0;
