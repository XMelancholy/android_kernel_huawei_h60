####################################################################################################
#
####################################################################################################


####################################################################################################
#Directories for library files 
####################################################################################################
vob_lib_dirs :=

####################################################################################################
#library files
####################################################################################################
vob_lib_files :=

####################################################################################################
#Directories for include files
####################################################################################################

####################################################################################################
#Directories for source files
####################################################################################################
vob_src_dirs := $(CODEC_SRC_FILE_PATH)/osa/src

####################################################################################################
#Source files
####################################################################################################
vob_src_files := \
        $(vob_src_dirs)/arch_hifi330.S \
	$(vob_src_dirs)/int_vector.S \
	$(vob_src_dirs)/reset.S \
	$(vob_src_dirs)/kernel.c \
	$(vob_src_dirs)/v_blkmem.c \
	$(vob_src_dirs)/v_int.c \
	$(vob_src_dirs)/v_lib.c \
	$(vob_src_dirs)/v_msg.c \
	$(vob_src_dirs)/v_queue.c \
	$(vob_src_dirs)/v_task.c \
	$(vob_src_dirs)/vos_id.c \
	$(vob_src_dirs)/vos_main.c \
	$(vob_src_dirs)/cpu_c.c \
	$(vob_src_dirs)/venus_stub.c

####################################################################################################
#general make rules
####################################################################################################


####################################################################################################
#
####################################################################################################


####################################################################################################
#
####################################################################################################