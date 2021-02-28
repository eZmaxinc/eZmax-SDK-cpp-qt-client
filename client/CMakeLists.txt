cmake_minimum_required(VERSION 3.2)

project(client)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

if (MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall -Wno-unused-variable")
endif ()

find_package(Qt5Core REQUIRED)
find_package(Qt5Network REQUIRED)

add_library(${PROJECT_NAME}
    OAIActivesession_getCurrent_v1_Response.cpp
    OAIActivesession_getCurrent_v1_Response_mPayload.cpp
    OAIAddress_Request.cpp
    OAIApikey_Request.cpp
    OAIApikey_RequestCompound.cpp
    OAIApikey_Response.cpp
    OAIApikey_createObject_v1_Request.cpp
    OAIApikey_createObject_v1_Response.cpp
    OAIApikey_createObject_v1_Response_mPayload.cpp
    OAIAttempt_Response.cpp
    OAICommon_Audit.cpp
    OAICommon_Response.cpp
    OAICommon_Response_Error.cpp
    OAICommon_Response_objDebug.cpp
    OAICommon_Response_objDebugPayload.cpp
    OAICommon_Response_objSQLQuery.cpp
    OAICommon_Webhook.cpp
    OAICommon_getAutocomplete_v1_Response.cpp
    OAICommon_getAutocomplete_v1_Response_mPayload.cpp
    OAIContact_Request.cpp
    OAIContact_RequestCompound.cpp
    OAIContact_RequestCompound_allOf.cpp
    OAIContactinformations_Request.cpp
    OAIContactinformations_RequestCompound.cpp
    OAIEmail_Request.cpp
    OAIEzsigndocument_Request.cpp
    OAIEzsigndocument_RequestCompound.cpp
    OAIEzsigndocument_Response.cpp
    OAIEzsigndocument_ResponseCompound.cpp
    OAIEzsigndocument_Response_allOf.cpp
    OAIEzsigndocument_applyEzsigntemplate_v1_Request.cpp
    OAIEzsigndocument_applyEzsigntemplate_v1_Response.cpp
    OAIEzsigndocument_createObject_v1_Request.cpp
    OAIEzsigndocument_createObject_v1_Response.cpp
    OAIEzsigndocument_createObject_v1_Response_mPayload.cpp
    OAIEzsigndocument_deleteObject_v1_Response.cpp
    OAIEzsigndocument_getDownloadUrl_v1_Response.cpp
    OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload.cpp
    OAIEzsigndocument_getObject_v1_Response.cpp
    OAIEzsigndocument_getObject_v1_Response_mPayload.cpp
    OAIEzsignfolder_Request.cpp
    OAIEzsignfolder_RequestCompound.cpp
    OAIEzsignfolder_Response.cpp
    OAIEzsignfolder_ResponseCompound.cpp
    OAIEzsignfolder_Response_allOf.cpp
    OAIEzsignfolder_createObject_v1_Request.cpp
    OAIEzsignfolder_createObject_v1_Response.cpp
    OAIEzsignfolder_createObject_v1_Response_mPayload.cpp
    OAIEzsignfolder_deleteObject_v1_Response.cpp
    OAIEzsignfolder_getObject_v1_Response.cpp
    OAIEzsignfolder_getObject_v1_Response_mPayload.cpp
    OAIEzsignfolder_send_v1_Request.cpp
    OAIEzsignfolder_send_v1_Response.cpp
    OAIEzsignfoldersignerassociation_Request.cpp
    OAIEzsignfoldersignerassociation_RequestCompound.cpp
    OAIEzsignfoldersignerassociation_createObject_v1_Request.cpp
    OAIEzsignfoldersignerassociation_createObject_v1_Response.cpp
    OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload.cpp
    OAIEzsignfoldersignerassociation_deleteObject_v1_Response.cpp
    OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response.cpp
    OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload.cpp
    OAIEzsignfoldersignerassociation_getObject_v1_Response.cpp
    OAIEzsignsignature_Request.cpp
    OAIEzsignsignature_RequestCompound.cpp
    OAIEzsignsignature_createObject_v1_Request.cpp
    OAIEzsignsignature_createObject_v1_Response.cpp
    OAIEzsignsignature_createObject_v1_Response_mPayload.cpp
    OAIEzsignsignature_deleteObject_v1_Response.cpp
    OAIEzsignsignature_getObject_v1_Response.cpp
    OAIEzsignsigner_Request.cpp
    OAIEzsignsigner_RequestCompound.cpp
    OAIEzsignsigner_RequestCompound_Contact.cpp
    OAIField_eEzsigndocumentStep.cpp
    OAIField_eEzsignfolderSendreminderfrequency.cpp
    OAIField_eEzsignfolderStep.cpp
    OAIField_ePhoneType.cpp
    OAIField_eUserType.cpp
    OAIField_eUserTypeSSPR.cpp
    OAIFranchisereferalincome_Request.cpp
    OAIFranchisereferalincome_RequestCompound.cpp
    OAIFranchisereferalincome_createObject_v1_Request.cpp
    OAIFranchisereferalincome_createObject_v1_Response.cpp
    OAIFranchisereferalincome_createObject_v1_Response_mPayload.cpp
    OAIGlobal_customer_getEndpoint_v1_Response.cpp
    OAIMultilingual_ApikeyDescription.cpp
    OAIPhone_Request.cpp
    OAISspr_resetPasswordRequest_v1_Request.cpp
    OAISspr_resetPassword_v1_Request.cpp
    OAISspr_sendUsernames_v1_Request.cpp
    OAISspr_unlockAccountRequest_v1_Request.cpp
    OAISspr_unlockAccount_v1_Request.cpp
    OAIUNUSED_ezsigndocument_editObject_v1_Request.cpp
    OAIUNUSED_ezsigndocument_editObject_v1_Response.cpp
    OAIUNUSED_ezsignfolder_editObject_v1_Request.cpp
    OAIUNUSED_ezsignfolder_editObject_v1_Response.cpp
    OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request.cpp
    OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Response.cpp
    OAIUNUSED_ezsignsignature_editObject_v1_Request.cpp
    OAIUNUSED_ezsignsignature_editObject_v1_Response.cpp
    OAIUser_Response.cpp
    OAIUser_Response_allOf.cpp
    OAIUser_createEzsignuser_v1_Request.cpp
    OAIUser_createEzsignuser_v1_Response.cpp
    OAIUser_createEzsignuser_v1_Response_mPayload.cpp
    OAIWebhook_Ezsign_DocumentCompleted.cpp
    OAIWebhook_Ezsign_DocumentCompleted_allOf.cpp
    OAIWebhook_Ezsign_FolderCompleted.cpp
    OAIWebhook_Ezsign_FolderCompleted_allOf.cpp
    OAIWebhook_Response.cpp
    OAIWebhook_User_UserCreated.cpp
    OAIWebhook_User_UserCreated_allOf.cpp
    OAIWebsite_Request.cpp
    OAIGlobalCustomerApi.cpp
    OAIModuleSsprApi.cpp
    OAIModuleUserApi.cpp
    OAIObjectActivesessionApi.cpp
    OAIObjectApikeyApi.cpp
    OAIObjectEzsigndocumentApi.cpp
    OAIObjectEzsignfolderApi.cpp
    OAIObjectEzsignfoldersignerassociationApi.cpp
    OAIObjectEzsignsignatureApi.cpp
    OAIObjectFranchisebrokerApi.cpp
    OAIObjectFranchiseofficeApi.cpp
    OAIObjectFranchisereferalincomeApi.cpp
    OAIObjectPeriodApi.cpp
    OAIHelpers.cpp
    OAIHttpRequest.cpp
    OAIHttpFileElement.cpp
)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Network )

if(NOT APPLE)
  target_link_libraries(${PROJECT_NAME} PRIVATE ssl crypto)
endif()

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_EXTENSIONS OFF)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
