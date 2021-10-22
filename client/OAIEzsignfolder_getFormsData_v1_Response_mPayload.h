/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_getFormsData_v1_Response_mPayload.h
 *
 * Payload for the /1/object/ezsignfolder/{pkiEzsigndocument}/getFormsData API Request
 */

#ifndef OAIEzsignfolder_getFormsData_v1_Response_mPayload_H
#define OAIEzsignfolder_getFormsData_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICustom_FormDataDocument_Response.h"
#include "OAICustom_FormsDataFolder_Response.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfolder_getFormsData_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignfolder_getFormsData_v1_Response_mPayload();
    OAIEzsignfolder_getFormsData_v1_Response_mPayload(QString json);
    ~OAIEzsignfolder_getFormsData_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignfolderId() const;
    void setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id);
    bool is_pki_ezsignfolder_id_Set() const;
    bool is_pki_ezsignfolder_id_Valid() const;

    QString getSEzsignfolderDescription() const;
    void setSEzsignfolderDescription(const QString &s_ezsignfolder_description);
    bool is_s_ezsignfolder_description_Set() const;
    bool is_s_ezsignfolder_description_Valid() const;

    QList<OAICustom_FormDataDocument_Response> getAObjFormDataDocument() const;
    void setAObjFormDataDocument(const QList<OAICustom_FormDataDocument_Response> &a_obj_form_data_document);
    bool is_a_obj_form_data_document_Set() const;
    bool is_a_obj_form_data_document_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignfolder_id;
    bool m_pki_ezsignfolder_id_isSet;
    bool m_pki_ezsignfolder_id_isValid;

    QString s_ezsignfolder_description;
    bool m_s_ezsignfolder_description_isSet;
    bool m_s_ezsignfolder_description_isValid;

    QList<OAICustom_FormDataDocument_Response> a_obj_form_data_document;
    bool m_a_obj_form_data_document_isSet;
    bool m_a_obj_form_data_document_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_getFormsData_v1_Response_mPayload)

#endif // OAIEzsignfolder_getFormsData_v1_Response_mPayload_H
