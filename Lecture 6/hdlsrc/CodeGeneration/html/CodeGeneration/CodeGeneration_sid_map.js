function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["CodeGeneration:6"] = "CodeGeneration:5";
    this.sidParentMap["CodeGeneration:3"] = "CodeGeneration:5";
    this.sidParentMap["CodeGeneration:7"] = "CodeGeneration:5";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
