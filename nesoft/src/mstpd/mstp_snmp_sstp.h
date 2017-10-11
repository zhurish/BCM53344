/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.pacos.conf $
 */
#ifndef DOT1SSTP_H
#define DOT1SSTP_H

/* enums for dot1sStpPortAdminEdgePort */
#define DOT1SSTPPORTADMINEDGEPORT_TRUE           1 
#define DOT1SSTPPORTADMINEDGEPORT_FALSE          2

/* enums for dot1sStpPortAdminPointToPoint */
#define DOT1SSTPPORTADMINPOINT2POINT_TRUE        1 
#define DOT1SSTPPORTADMINPOINT2POINT_FALSE       2 
#define DOT1SSTPPORTADMINPOINT2POINT_AUTO        3

/* enums for dot1sStpPortOperEdgePort */
#define DOT1SSTPPORTOPEREDGEPORT_TRUE            1
#define DOT1SSTPPORTOPEREDGEPORT_FALSE           2

/* enums for dot1sStpPortOperPointToPoint */
#define DOT1SSTPPORTOPERPOINT2POINT_TRUE         1
#define DOT1SSTPPORTOPERPOINT2POINT_FALSE        2

/* enums for dot1sStpInstOperEnable */
#define DOT1SSTPINSTOPERENABLE_TRUE              1
#define DOT1SSTPINSTOPERENABLE_FALSE             2

/* enums for dot1sStpEnable */
#define DOT1SSTPENABLE_TRUE              1
#define DOT1SSTPENABLE_FALSE             2

/* Row Status. */
#define ROW_STATUS_MIN                  0
#define ROW_STATUS_NONEXISTENT          0
#define ROW_STATUS_ACTIVE               1
#define ROW_STATUS_NOTINSERVICE         2
#define ROW_STATUS_NOTREADY             3
#define ROW_STATUS_CREATEANDGO          4
#define ROW_STATUS_CREATEANDWAIT        5
#define ROW_STATUS_DESTROY              6
#define ROW_STATUS_MAX                  7

/* Port state types */
#define DOT1SSTPPORTSTATE_DISABLED      1 
#define DOT1SSTPPORTSTATE_DISCARDING    2
#define DOT1SSTPPORTSTATE_LISTENING     3
#define DOT1SSTPPORTSTATE_FORWARDING    4

struct tmp_rlist_data 
{
  int instance_index;
  int vlan_range_index;
  mstp_vid_t hi;
  mstp_vid_t lo;
  bool_t creation;
} tmp_rlist_info;

/*
 * function declarations 
 */
void            init_dot1sStp(struct lib_globals *zg);
FindVarMethod   var_dot1sStp;
FindVarMethod   var_dot1sStpInstTable;
FindVarMethod   var_dot1sStpPortTable;
FindVarMethod   var_dot1sStpInstPortTable;
FindVarMethod   var_dot1sStpVlanTable;

WriteMethod     write_dot1sStp_scalars;
WriteMethod     write_dot1sStpInstTable;
WriteMethod     write_dot1sStpPortTable;
WriteMethod     write_dot1sStpInstPortTable;
WriteMethod     write_dot1sStpVlanTable;

#endif                          /* DOT1SSTP_H */