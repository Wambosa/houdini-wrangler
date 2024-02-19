// Houdini how to assign customizable colors in vertex for Unreal 5 GOOSE SESSION 3
// video: https://youtu.be/wb9azQvYdRM
// ----------------------------------------------------------
// INPUT SETTINGS
// input 1: {your geometry with point groups c_1 c_2 c_3 c_n}
// run over: points
// ----------------------------------------------------------

float step = 0.125;
string colorIdPrefix = "c_";
string concepts[] = detailintrinsic(0, "pointgroups");


for(int i = 0; i < len(concepts); i++) {
  string g = concepts[i];
  int isInGroup = inpointgroup(0, g, @ptnum);
  if (!isInGroup)
    continue;
  
  int isColorPrefix = concepts[i][0:2] == colorIdPrefix;
  float id = atof(g[2:3]);
  float nId = id * step;

  if (isColorPrefix)
    v@Cd_v = set(nId, v@Cd_v.g, v@Cd_v.b);
}

// -----------------
// OTHER USAGE NOTES
// the fixed value of "step" is 1 / MAX_COLOR_CUSTOMIZATION_COUNT = 0.125
// we will support 8 colors per model max
