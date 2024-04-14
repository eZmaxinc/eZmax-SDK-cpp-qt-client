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
 * Ezsignbulksendtransmission_ResponseCompound.h
 *
 * An Ezsignbulksendtransmission Object and children to create a complete structure
 */

#ifndef Ezsignbulksendtransmission_ResponseCompound_H
#define Ezsignbulksendtransmission_ResponseCompound_H

#include <QJsonObject>

#include "Common_Audit.h"
#include "Custom_Ezsignfoldertransmission_Response.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Audit;
class Custom_Ezsignfoldertransmission_Response;

class Ezsignbulksendtransmission_ResponseCompound : public Object {
public:
    Ezsignbulksendtransmission_ResponseCompound();
    Ezsignbulksendtransmission_ResponseCompound(QString json);
    ~Ezsignbulksendtransmission_ResponseCompound() override;

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

    Common_Audit getObjAudit() const;
    void setObjAudit(const Common_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    QList<Custom_Ezsignfoldertransmission_Response> getAObjEzsignfoldertransmission() const;
    void setAObjEzsignfoldertransmission(const QList<Custom_Ezsignfoldertransmission_Response> &a_obj_ezsignfoldertransmission);
    bool is_a_obj_ezsignfoldertransmission_Set() const;
    bool is_a_obj_ezsignfoldertransmission_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignbulksendtransmission_id;
    bool m_pki_ezsignbulksendtransmission_id_isSet;
    bool m_pki_ezsignbulksendtransmission_id_isValid;

    qint32 m_fki_ezsignbulksend_id;
    bool m_fki_ezsignbulksend_id_isSet;
    bool m_fki_ezsignbulksend_id_isValid;

    QString m_s_ezsignbulksendtransmission_description;
    bool m_s_ezsignbulksendtransmission_description_isSet;
    bool m_s_ezsignbulksendtransmission_description_isValid;

    qint32 m_i_ezsignbulksendtransmission_errors;
    bool m_i_ezsignbulksendtransmission_errors_isSet;
    bool m_i_ezsignbulksendtransmission_errors_isValid;

    Common_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;

    QList<Custom_Ezsignfoldertransmission_Response> m_a_obj_ezsignfoldertransmission;
    bool m_a_obj_ezsignfoldertransmission_isSet;
    bool m_a_obj_ezsignfoldertransmission_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignbulksendtransmission_ResponseCompound)

#endif // Ezsignbulksendtransmission_ResponseCompound_H