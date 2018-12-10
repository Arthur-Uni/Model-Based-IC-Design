function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["HybridForm:5"] = "HybridForm:4";
    this.sidParentMap["HybridForm:6"] = "HybridForm:4";
    this.sidParentMap["HybridForm:7"] = "HybridForm:4";
    this.sidParentMap["HybridForm:8"] = "HybridForm:4";
    this.sidParentMap["HybridForm:9"] = "HybridForm:4";
    this.sidParentMap["HybridForm:10"] = "HybridForm:4";
    this.sidParentMap["HybridForm:11"] = "HybridForm:4";
    this.sidParentMap["HybridForm:12"] = "HybridForm:4";
    this.sidParentMap["HybridForm:13"] = "HybridForm:4";
    this.sidParentMap["HybridForm:14"] = "HybridForm:4";
    this.sidParentMap["HybridForm:15"] = "HybridForm:4";
    this.sidParentMap["HybridForm:16"] = "HybridForm:4";
    this.sidParentMap["HybridForm:17"] = "HybridForm:4";
    this.sidParentMap["HybridForm:18"] = "HybridForm:4";
    this.sidParentMap["HybridForm:19"] = "HybridForm:4";
    this.sidParentMap["HybridForm:20"] = "HybridForm:4";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
