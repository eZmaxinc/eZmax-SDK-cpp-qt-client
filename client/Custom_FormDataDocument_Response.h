/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Custom_FormDataDocument_Response.h
 *
 * A form Data Document Object 
 */

#ifndef Custom_FormDataDocument_Response_H
#define Custom_FormDataDocument_Response_H

#include <QJsonObject>

#include "Custom_FormDataSigner_Response.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_FormDataSigner_Response;

class Custom_FormDataDocument_Response : public Object {
public:
    Custom_FormDataDocument_Response();
    Custom_FormDataDocument_Response(QString json);
    ~Custom_FormDataDocument_Response() override;

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

    QList<Custom_FormDataSigner_Response> getAObjFormDataSigner() const;
    void setAObjFormDataSigner(const QList<Custom_FormDataSigner_Response> &a_obj_form_data_signer);
    bool is_a_obj_form_data_signer_Set() const;
    bool is_a_obj_form_data_signer_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigndocument_id;
    bool m_pki_ezsigndocument_id_isSet;
    bool m_pki_ezsigndocument_id_isValid;

    qint32 m_fki_ezsignfolder_id;
    bool m_fki_ezsignfolder_id_isSet;
    bool m_fki_ezsignfolder_id_isValid;

    QString m_s_ezsigndocument_name;
    bool m_s_ezsigndocument_name_isSet;
    bool m_s_ezsigndocument_name_isValid;

    QString m_dt_modified_date;
    bool m_dt_modified_date_isSet;
    bool m_dt_modified_date_isValid;

    QList<Custom_FormDataSigner_Response> m_a_obj_form_data_signer;
    bool m_a_obj_form_data_signer_isSet;
    bool m_a_obj_form_data_signer_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_FormDataDocument_Response)

#endif // Custom_FormDataDocument_Response_H