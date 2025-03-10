/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignsignature_sign_v1_Request.h
 *
 * Request for POST /1/object/ezsignsignature/{pkiEzsignsignatureID}/sign
 */

#ifndef Ezsignsignature_sign_v1_Request_H
#define Ezsignsignature_sign_v1_Request_H

#include <QJsonObject>

#include "Common_File.h"
#include "Custom_Creditcard_Request.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_File;
class Custom_Creditcard_Request;

class Ezsignsignature_sign_v1_Request : public Object {
public:
    Ezsignsignature_sign_v1_Request();
    Ezsignsignature_sign_v1_Request(QString json);
    ~Ezsignsignature_sign_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiEzsignsigningreasonId() const;
    void setFkiEzsignsigningreasonId(const qint32 &fki_ezsignsigningreason_id);
    bool is_fki_ezsignsigningreason_id_Set() const;
    bool is_fki_ezsignsigningreason_id_Valid() const;

    qint32 getFkiFontId() const;
    void setFkiFontId(const qint32 &fki_font_id);
    bool is_fki_font_id_Set() const;
    bool is_fki_font_id_Valid() const;

    QString getSValue() const;
    void setSValue(const QString &s_value);
    bool is_s_value_Set() const;
    bool is_s_value_Valid() const;

    QString getEAttachmentsConfirmationDecision() const;
    void setEAttachmentsConfirmationDecision(const QString &e_attachments_confirmation_decision);
    bool is_e_attachments_confirmation_decision_Set() const;
    bool is_e_attachments_confirmation_decision_Valid() const;

    QString getSAttachmentsRefusalReason() const;
    void setSAttachmentsRefusalReason(const QString &s_attachments_refusal_reason);
    bool is_s_attachments_refusal_reason_Set() const;
    bool is_s_attachments_refusal_reason_Valid() const;

    QString getSSvg() const;
    void setSSvg(const QString &s_svg);
    bool is_s_svg_Set() const;
    bool is_s_svg_Valid() const;

    QList<Common_File> getAObjFile() const;
    void setAObjFile(const QList<Common_File> &a_obj_file);
    bool is_a_obj_file_Set() const;
    bool is_a_obj_file_Valid() const;

    Custom_Creditcard_Request getObjCreditcard() const;
    void setObjCreditcard(const Custom_Creditcard_Request &obj_creditcard);
    bool is_obj_creditcard_Set() const;
    bool is_obj_creditcard_Valid() const;

    bool isBIsAutomatic() const;
    void setBIsAutomatic(const bool &b_is_automatic);
    bool is_b_is_automatic_Set() const;
    bool is_b_is_automatic_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_fki_ezsignsigningreason_id;
    bool m_fki_ezsignsigningreason_id_isSet;
    bool m_fki_ezsignsigningreason_id_isValid;

    qint32 m_fki_font_id;
    bool m_fki_font_id_isSet;
    bool m_fki_font_id_isValid;

    QString m_s_value;
    bool m_s_value_isSet;
    bool m_s_value_isValid;

    QString m_e_attachments_confirmation_decision;
    bool m_e_attachments_confirmation_decision_isSet;
    bool m_e_attachments_confirmation_decision_isValid;

    QString m_s_attachments_refusal_reason;
    bool m_s_attachments_refusal_reason_isSet;
    bool m_s_attachments_refusal_reason_isValid;

    QString m_s_svg;
    bool m_s_svg_isSet;
    bool m_s_svg_isValid;

    QList<Common_File> m_a_obj_file;
    bool m_a_obj_file_isSet;
    bool m_a_obj_file_isValid;

    Custom_Creditcard_Request m_obj_creditcard;
    bool m_obj_creditcard_isSet;
    bool m_obj_creditcard_isValid;

    bool m_b_is_automatic;
    bool m_b_is_automatic_isSet;
    bool m_b_is_automatic_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsignature_sign_v1_Request)

#endif // Ezsignsignature_sign_v1_Request_H
