/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksendtransmission_ResponseCompound.h
 *
 * An Ezsignbulksendtransmission Object and children to create a complete structure
 */

#ifndef OAIEzsignbulksendtransmission_ResponseCompound_H
#define OAIEzsignbulksendtransmission_ResponseCompound_H

#include <QJsonObject>

#include "OAICommon_Audit.h"
#include "OAICustom_Ezsignfoldertransmission_Response.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICommon_Audit;
class OAICustom_Ezsignfoldertransmission_Response;

class OAIEzsignbulksendtransmission_ResponseCompound : public OAIObject {
public:
    OAIEzsignbulksendtransmission_ResponseCompound();
    OAIEzsignbulksendtransmission_ResponseCompound(QString json);
    ~OAIEzsignbulksendtransmission_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignbulksendtransmissionId() const;
    void setPkiEzsignbulksendtransmissionId(const qint32 &pki_ezsignbulksendtransmission_id);
    bool is_pki_ezsignbulksendtransmission_id_Set() const;
    bool is_pki_ezsignbulksendtransmission_id_Valid() const;

    qint32 getFkiEzsignbulksendId() const;
    void setFkiEzsignbulksendId(const qint32 &fki_ezsignbulksend_id);
    bool is_fki_ezsignbulksend_id_Set() const;
    bool is_fki_ezsignbulksend_id_Valid() const;

    QString getSEzsignbulksendtransmissionDescription() const;
    void setSEzsignbulksendtransmissionDescription(const QString &s_ezsignbulksendtransmission_description);
    bool is_s_ezsignbulksendtransmission_description_Set() const;
    bool is_s_ezsignbulksendtransmission_description_Valid() const;

    qint32 getIEzsignbulksendtransmissionErrors() const;
    void setIEzsignbulksendtransmissionErrors(const qint32 &i_ezsignbulksendtransmission_errors);
    bool is_i_ezsignbulksendtransmission_errors_Set() const;
    bool is_i_ezsignbulksendtransmission_errors_Valid() const;

    OAICommon_Audit getObjAudit() const;
    void setObjAudit(const OAICommon_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    QList<OAICustom_Ezsignfoldertransmission_Response> getAObjEzsignfoldertransmission() const;
    void setAObjEzsignfoldertransmission(const QList<OAICustom_Ezsignfoldertransmission_Response> &a_obj_ezsignfoldertransmission);
    bool is_a_obj_ezsignfoldertransmission_Set() const;
    bool is_a_obj_ezsignfoldertransmission_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignbulksendtransmission_id;
    bool m_pki_ezsignbulksendtransmission_id_isSet;
    bool m_pki_ezsignbulksendtransmission_id_isValid;

    qint32 fki_ezsignbulksend_id;
    bool m_fki_ezsignbulksend_id_isSet;
    bool m_fki_ezsignbulksend_id_isValid;

    QString s_ezsignbulksendtransmission_description;
    bool m_s_ezsignbulksendtransmission_description_isSet;
    bool m_s_ezsignbulksendtransmission_description_isValid;

    qint32 i_ezsignbulksendtransmission_errors;
    bool m_i_ezsignbulksendtransmission_errors_isSet;
    bool m_i_ezsignbulksendtransmission_errors_isValid;

    OAICommon_Audit obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;

    QList<OAICustom_Ezsignfoldertransmission_Response> a_obj_ezsignfoldertransmission;
    bool m_a_obj_ezsignfoldertransmission_isSet;
    bool m_a_obj_ezsignfoldertransmission_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksendtransmission_ResponseCompound)

#endif // OAIEzsignbulksendtransmission_ResponseCompound_H
