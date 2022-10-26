/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksendsignermapping_ResponseCompound.h
 *
 * A Ezsignbulksendsignermapping Object
 */

#ifndef OAIEzsignbulksendsignermapping_ResponseCompound_H
#define OAIEzsignbulksendsignermapping_ResponseCompound_H

#include <QJsonObject>

#include "OAIEzsignbulksendsignermapping_Response.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignbulksendsignermapping_ResponseCompound : public OAIObject {
public:
    OAIEzsignbulksendsignermapping_ResponseCompound();
    OAIEzsignbulksendsignermapping_ResponseCompound(QString json);
    ~OAIEzsignbulksendsignermapping_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignbulksendsignermappingId() const;
    void setPkiEzsignbulksendsignermappingId(const qint32 &pki_ezsignbulksendsignermapping_id);
    bool is_pki_ezsignbulksendsignermapping_id_Set() const;
    bool is_pki_ezsignbulksendsignermapping_id_Valid() const;

    qint32 getFkiEzsignbulksendId() const;
    void setFkiEzsignbulksendId(const qint32 &fki_ezsignbulksend_id);
    bool is_fki_ezsignbulksend_id_Set() const;
    bool is_fki_ezsignbulksend_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    QString getSEzsignbulksendsignermappingDescription() const;
    void setSEzsignbulksendsignermappingDescription(const QString &s_ezsignbulksendsignermapping_description);
    bool is_s_ezsignbulksendsignermapping_description_Set() const;
    bool is_s_ezsignbulksendsignermapping_description_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignbulksendsignermapping_id;
    bool m_pki_ezsignbulksendsignermapping_id_isSet;
    bool m_pki_ezsignbulksendsignermapping_id_isValid;

    qint32 fki_ezsignbulksend_id;
    bool m_fki_ezsignbulksend_id_isSet;
    bool m_fki_ezsignbulksend_id_isValid;

    qint32 fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    QString s_ezsignbulksendsignermapping_description;
    bool m_s_ezsignbulksendsignermapping_description_isSet;
    bool m_s_ezsignbulksendsignermapping_description_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksendsignermapping_ResponseCompound)

#endif // OAIEzsignbulksendsignermapping_ResponseCompound_H
