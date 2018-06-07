/*================================================================================

    csmi/src/common/include/csmi_cmds_def.h

  © Copyright IBM Corporation 2015-2018. All Rights Reserved

    This program is licensed under the terms of the Eclipse Public License
    v1.0 as published by the Eclipse Foundation and available at
    http://www.eclipse.org/legal/epl-v10.html

    U.S. Government Users Restricted Rights:  Use, duplication or disclosure
    restricted by GSA ADP Schedule Contract with IBM Corp.

================================================================================*/
// NOTES: An API name has to have csm_ as its prefix. In this file, only the string after the prefix
//        needs to be used. For example, for the csm_allcation_query api, add an entry
//        cmd(allocation_query) here.
cmd(UNDEFINED)
//Burst Buffer
cmd(bb_cmd)//1
cmd(bb_lv_create)
cmd(bb_lv_delete)
cmd(bb_lv_query)
cmd(bb_lv_update)
cmd(bb_vg_create)
cmd(bb_vg_delete)
cmd(bb_vg_query)
// Diagnostic
cmd(diag_result_create)// 8
cmd(diag_run_begin)
cmd(diag_run_end)
cmd(diag_run_query)
cmd(diag_run_query_details)
// Workload Management
cmd(allocation_step_cgroup_delete)//14
cmd(allocation_step_cgroup_create)
cmd(allocation_update_state)
cmd(allocation_query_active_all)
cmd(allocation_create) 
cmd(allocation_delete)//19
cmd(allocation_query)
cmd(allocation_query_details)
cmd(allocation_step_begin)
cmd(allocation_step_end)
cmd(allocation_step_query)//24
cmd(allocation_step_query_active_all)
cmd(allocation_step_query_details)
cmd(node_resources_query)
cmd(node_resources_query_all)
// RAS
cmd(ras_event_create)   // 29
cmd(ras_subscribe)
cmd(ras_unsubscribe)
cmd(ras_sub_event)
cmd(ras_event_query)
cmd(ras_msg_type_create)
cmd(ras_msg_type_update)//35
cmd(ras_msg_type_get)
cmd(ras_msg_type_delete)
cmd(ras_msg_type_query)
// Inventory
cmd(ib_cable_query)  // 39
cmd(ib_cable_query_history)
cmd(ib_cable_update)
cmd(node_attributes_update)  
cmd(node_attributes_query)
cmd(node_attributes_query_details)
cmd(node_attributes_query_history)
cmd(node_query_state_history)
cmd(node_delete)
cmd(switch_attributes_query)
cmd(switch_attributes_query_details)
cmd(switch_attributes_query_history)
cmd(switch_attributes_update)
// Internal Inventory Functions
cmd(INV_get_node_inventory)//50
cmd(ib_cable_inventory_collection)
cmd(switch_inventory_collection)
cmd(switch_children_inventory_collection)

// PRPQ
cmd(allocation_resources_query)
cmd(allocation_update_history)
cmd(ras_event_query_allocation)
cmd(cgroup_login)
cmd(jsrun_cmd)

//OPEN SOURCE
cmd(cluster_query_state)

// new APIS should go here by adding the new API immediately above this line
// and removing the first reserved_NN that appears after MAX_REGULAR
cmd(MAX_REGULAR)

// reserved cmd IDS
cmd(reserved_63)
cmd(reserved_64)
cmd(reserved_65)
cmd(reserved_66)
cmd(reserved_67)
cmd(reserved_68)
cmd(reserved_69)
cmd(reserved_70)
cmd(reserved_71)
cmd(reserved_72)
cmd(reserved_73)
cmd(reserved_74)
cmd(reserved_75)
cmd(reserved_76)
cmd(reserved_77)
cmd(reserved_78)
cmd(reserved_79)
cmd(reserved_80)
cmd(reserved_81)
cmd(reserved_82)
cmd(reserved_83)
cmd(reserved_84)
cmd(reserved_85)
cmd(reserved_86)
cmd(reserved_87)
cmd(reserved_88)
cmd(reserved_89)
cmd(reserved_90)
cmd(reserved_91)
cmd(reserved_92)
cmd(reserved_93)
cmd(reserved_94)
cmd(reserved_95)
cmd(reserved_96)
cmd(reserved_97)
cmd(reserved_98)
cmd(reserved_99)
cmd(reserved_100)
cmd(reserved_101)
cmd(reserved_102)
cmd(reserved_103)
cmd(reserved_104)
cmd(reserved_105)
cmd(reserved_106)
cmd(reserved_107)
cmd(reserved_108)
cmd(reserved_109)
cmd(reserved_110)
cmd(reserved_111)
cmd(reserved_112)
cmd(reserved_113)
cmd(reserved_114)
cmd(reserved_115)
cmd(reserved_116)
cmd(reserved_117)
cmd(reserved_118)
cmd(reserved_119)
cmd(reserved_120)
cmd(reserved_121)
cmd(reserved_122)
cmd(reserved_123)
cmd(reserved_124)
cmd(reserved_125)
cmd(reserved_126)
cmd(reserved_127)
cmd(reserved_128)
cmd(reserved_129)
cmd(reserved_130)
cmd(reserved_131)
cmd(reserved_132)
cmd(reserved_133)
cmd(reserved_134)
cmd(reserved_135)
cmd(reserved_136)
cmd(reserved_137)
cmd(reserved_138)
cmd(reserved_139)
cmd(reserved_140)
cmd(reserved_141)
cmd(reserved_142)
cmd(reserved_143)
cmd(reserved_144)
cmd(reserved_145)
cmd(reserved_146)
cmd(reserved_147)
cmd(reserved_148)
cmd(reserved_149)
cmd(reserved_150)
cmd(reserved_151)
cmd(reserved_152)
cmd(reserved_153)
cmd(reserved_154)
cmd(reserved_155)
cmd(reserved_156)
cmd(reserved_157)
cmd(reserved_158)
cmd(reserved_159)
cmd(reserved_160)
cmd(reserved_161)
cmd(reserved_162)
cmd(reserved_163)
cmd(reserved_164)
cmd(reserved_165)
cmd(reserved_166)
cmd(reserved_167)
cmd(reserved_168)
cmd(reserved_169)
cmd(reserved_170)
cmd(reserved_171)
cmd(reserved_172)
cmd(reserved_173)
cmd(reserved_174)
cmd(reserved_175)
cmd(reserved_176)
cmd(reserved_177)
cmd(reserved_178)
cmd(reserved_179)
cmd(reserved_180)
cmd(reserved_181)
cmd(reserved_182)
cmd(reserved_183)
cmd(reserved_184)
cmd(reserved_185)
cmd(reserved_186)
cmd(reserved_187)
cmd(reserved_188)
cmd(reserved_189)
cmd(reserved_190)
cmd(reserved_191)
cmd(reserved_192)
cmd(reserved_193)
cmd(reserved_194)
cmd(reserved_195)
cmd(reserved_196)
cmd(reserved_197)
cmd(reserved_198)
cmd(reserved_199)
