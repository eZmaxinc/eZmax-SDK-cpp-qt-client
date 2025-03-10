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
 * Communication_Request.h
 *
 * Request for POST /1/object/communication
 */

#ifndef Communication_Request_H
#define Communication_Request_H

#include <QJsonObject>

#include "Custom_Communicationsender_Request.h"
#include "Field_eCommunicationImportance.h"
#include "Field_eCommunicationType.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_Communicationsender_Request;

class Communication_Request : public Object {
public:
    Communication_Request();
    Communication_Request(QString json);
    ~Communication_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiCommunicationId() const;
    void setPkiCommunicationId(const qint32 &pki_communication_id);
    bool is_pki_communication_id_Set() const;
    bool is_pki_communication_id_Valid() const;

    Field_eCommunicationImportance getECommunicationImportance() const;
    void setECommunicationImportance(const Field_eCommunicationImportance &e_communication_importance);
    bool is_e_communication_importance_Set() const;
    bool is_e_communication_importance_Valid() const;

    Field_eCommunicationType getECommunicationType() const;
    void setECommunicationType(const Field_eCommunicationType &e_communication_type);
    bool is_e_communication_type_Set() const;
    bool is_e_communication_type_Valid() const;

    Custom_Communicationsender_Request getObjCommunicationsender() const;
    void setObjCommunicationsender(const Custom_Communicationsender_Request &obj_communicationsender);
    bool is_obj_communicationsender_Set() const;
    bool is_obj_communicationsender_Valid() const;

    QString getSCommunicationSubject() const;
    void setSCommunicationSubject(const QString &s_communication_subject);
    bool is_s_communication_subject_Set() const;
    bool is_s_communication_subject_Valid() const;

    QString getTCommunicationBody() const;
    void setTCommunicationBody(const QString &t_communication_body);
    bool is_t_communication_body_Set() const;
    bool is_t_communication_body_Valid() const;

    bool isBCommunicationPrivate() const;
    void setBCommunicationPrivate(const bool &b_communication_private);
    bool is_b_communication_private_Set() const;
    bool is_b_communication_private_Valid() const;

    QString getECommunicationAttachmenttype() const;
    void setECommunicationAttachmenttype(const QString &e_communication_attachmenttype);
    bool is_e_communication_attachmenttype_Set() const;
    bool is_e_communication_attachmenttype_Valid() const;

    qint32 getICommunicationAttachmentlinkexpiration() const;
    void setICommunicationAttachmentlinkexpiration(const qint32 &i_communication_attachmentlinkexpiration);
    bool is_i_communication_attachmentlinkexpiration_Set() const;
    bool is_i_communication_attachmentlinkexpiration_Valid() const;

    bool isBCommunicationReadreceipt() const;
    void setBCommunicationReadreceipt(const bool &b_communication_readreceipt);
    bool is_b_communication_readreceipt_Set() const;
    bool is_b_communication_readreceipt_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_communication_id;
    bool m_pki_communication_id_isSet;
    bool m_pki_communication_id_isValid;

    Field_eCommunicationImportance m_e_communication_importance;
    bool m_e_communication_importance_isSet;
    bool m_e_communication_importance_isValid;

    Field_eCommunicationType m_e_communication_type;
    bool m_e_communication_type_isSet;
    bool m_e_communication_type_isValid;

    Custom_Communicationsender_Request m_obj_communicationsender;
    bool m_obj_communicationsender_isSet;
    bool m_obj_communicationsender_isValid;

    QString m_s_communication_subject;
    bool m_s_communication_subject_isSet;
    bool m_s_communication_subject_isValid;

    QString m_t_communication_body;
    bool m_t_communication_body_isSet;
    bool m_t_communication_body_isValid;

    bool m_b_communication_private;
    bool m_b_communication_private_isSet;
    bool m_b_communication_private_isValid;

    QString m_e_communication_attachmenttype;
    bool m_e_communication_attachmenttype_isSet;
    bool m_e_communication_attachmenttype_isValid;

    qint32 m_i_communication_attachmentlinkexpiration;
    bool m_i_communication_attachmentlinkexpiration_isSet;
    bool m_i_communication_attachmentlinkexpiration_isValid;

    bool m_b_communication_readreceipt;
    bool m_b_communication_readreceipt_isSet;
    bool m_b_communication_readreceipt_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Communication_Request)

#endif // Communication_Request_H
