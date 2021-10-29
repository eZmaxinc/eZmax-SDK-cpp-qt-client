/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.3
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustom_FormDataDocument_Response.h
 *
 * A form Data Document Object 
 */

#ifndef OAICustom_FormDataDocument_Response_H
#define OAICustom_FormDataDocument_Response_H

#include <QJsonObject>

#include "OAICustom_FormDataSigner_Response.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_FormDataDocument_Response : public OAIObject {
public:
    OAICustom_FormDataDocument_Response();
    OAICustom_FormDataDocument_Response(QString json);
    ~OAICustom_FormDataDocument_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigndocumentId() const;
    void setPkiEzsigndocumentId(const qint32 &pki_ezsigndocument_id);
    bool is_pki_ezsigndocument_id_Set() const;
    bool is_pki_ezsigndocument_id_Valid() const;

    qint32 getFkiEzsignfolderId() const;
    void setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id);
    bool is_fki_ezsignfolder_id_Set() const;
    bool is_fki_ezsignfolder_id_Valid() const;

    QString getSEzsigndocumentName() const;
    void setSEzsigndocumentName(const QString &s_ezsigndocument_name);
    bool is_s_ezsigndocument_name_Set() const;
    bool is_s_ezsigndocument_name_Valid() const;

    QString getDtModifiedDate() const;
    void setDtModifiedDate(const QString &dt_modified_date);
    bool is_dt_modified_date_Set() const;
    bool is_dt_modified_date_Valid() const;

    QList<OAICustom_FormDataSigner_Response> getAObjFormDataSigner() const;
    void setAObjFormDataSigner(const QList<OAICustom_FormDataSigner_Response> &a_obj_form_data_signer);
    bool is_a_obj_form_data_signer_Set() const;
    bool is_a_obj_form_data_signer_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigndocument_id;
    bool m_pki_ezsigndocument_id_isSet;
    bool m_pki_ezsigndocument_id_isValid;

    qint32 fki_ezsignfolder_id;
    bool m_fki_ezsignfolder_id_isSet;
    bool m_fki_ezsignfolder_id_isValid;

    QString s_ezsigndocument_name;
    bool m_s_ezsigndocument_name_isSet;
    bool m_s_ezsigndocument_name_isValid;

    QString dt_modified_date;
    bool m_dt_modified_date_isSet;
    bool m_dt_modified_date_isValid;

    QList<OAICustom_FormDataSigner_Response> a_obj_form_data_signer;
    bool m_a_obj_form_data_signer_isSet;
    bool m_a_obj_form_data_signer_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_FormDataDocument_Response)

#endif // OAICustom_FormDataDocument_Response_H
