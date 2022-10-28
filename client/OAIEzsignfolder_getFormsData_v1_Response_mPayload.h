/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_getFormsData_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsignfolder/{pkiEzsigndocument}/getFormsData
 */

#ifndef OAIEzsignfolder_getFormsData_v1_Response_mPayload_H
#define OAIEzsignfolder_getFormsData_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICustom_FormsDataFolder_Response.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_FormsDataFolder_Response;

class OAIEzsignfolder_getFormsData_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignfolder_getFormsData_v1_Response_mPayload();
    OAIEzsignfolder_getFormsData_v1_Response_mPayload(QString json);
    ~OAIEzsignfolder_getFormsData_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICustom_FormsDataFolder_Response getObjFormsDataFolder() const;
    void setObjFormsDataFolder(const OAICustom_FormsDataFolder_Response &obj_forms_data_folder);
    bool is_obj_forms_data_folder_Set() const;
    bool is_obj_forms_data_folder_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICustom_FormsDataFolder_Response obj_forms_data_folder;
    bool m_obj_forms_data_folder_isSet;
    bool m_obj_forms_data_folder_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_getFormsData_v1_Response_mPayload)

#endif // OAIEzsignfolder_getFormsData_v1_Response_mPayload_H
