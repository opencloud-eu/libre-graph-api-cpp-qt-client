QT += network

HEADERS += \
# Models
    $${PWD}/OAICollection_of_driveItems.h \
    $${PWD}/OAICollection_of_drives.h \
    $${PWD}/OAIDeleted.h \
    $${PWD}/OAIDrive.h \
    $${PWD}/OAIDriveItem.h \
    $${PWD}/OAIFileSystemInfo.h \
    $${PWD}/OAIFolder.h \
    $${PWD}/OAIFolderView.h \
    $${PWD}/OAIHashes.h \
    $${PWD}/OAIIdentity.h \
    $${PWD}/OAIIdentitySet.h \
    $${PWD}/OAIImage.h \
    $${PWD}/OAIItemReference.h \
    $${PWD}/OAIOdata_error.h \
    $${PWD}/OAIOdata_error_detail.h \
    $${PWD}/OAIOdata_error_main.h \
    $${PWD}/OAIOpenGraphFile.h \
    $${PWD}/OAIQuota.h \
    $${PWD}/OAIUser.h \
# APIs
    $${PWD}/OAIDrivesApi.h \
    $${PWD}/OAIDrivesRootApi.h \
    $${PWD}/OAIMeDriveApi.h \
    $${PWD}/OAIMeDriveRootApi.h \
    $${PWD}/OAIMeDriveRootChildrenApi.h \
    $${PWD}/OAIMeDrivesApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIObject.h \
    $${PWD}/OAIEnum.h \
    $${PWD}/OAIHttpFileElement.h \
    $${PWD}/OAIServerConfiguration.h \
    $${PWD}/OAIServerVariable.h \
    $${PWD}/OAIOauth.h

SOURCES += \
# Models
    $${PWD}/OAICollection_of_driveItems.cpp \
    $${PWD}/OAICollection_of_drives.cpp \
    $${PWD}/OAIDeleted.cpp \
    $${PWD}/OAIDrive.cpp \
    $${PWD}/OAIDriveItem.cpp \
    $${PWD}/OAIFileSystemInfo.cpp \
    $${PWD}/OAIFolder.cpp \
    $${PWD}/OAIFolderView.cpp \
    $${PWD}/OAIHashes.cpp \
    $${PWD}/OAIIdentity.cpp \
    $${PWD}/OAIIdentitySet.cpp \
    $${PWD}/OAIImage.cpp \
    $${PWD}/OAIItemReference.cpp \
    $${PWD}/OAIOdata_error.cpp \
    $${PWD}/OAIOdata_error_detail.cpp \
    $${PWD}/OAIOdata_error_main.cpp \
    $${PWD}/OAIOpenGraphFile.cpp \
    $${PWD}/OAIQuota.cpp \
    $${PWD}/OAIUser.cpp \
# APIs
    $${PWD}/OAIDrivesApi.cpp \
    $${PWD}/OAIDrivesRootApi.cpp \
    $${PWD}/OAIMeDriveApi.cpp \
    $${PWD}/OAIMeDriveRootApi.cpp \
    $${PWD}/OAIMeDriveRootChildrenApi.cpp \
    $${PWD}/OAIMeDrivesApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp \
    $${PWD}/OAIOauth.cpp
