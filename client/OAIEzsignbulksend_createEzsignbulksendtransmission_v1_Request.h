/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Request.h
 *
 * Request for POST /1/object/ezsignbulksend/{pkiEzsignbulksendID}/createEzsignbulksendtransmission
 */

#ifndef OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Request_H
#define OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Request_H

#include <QJsonObject>

#include "OAIField_eEzsignfolderSendreminderfrequency.h"
#include <QByteArray>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Request : public OAIObject {
public:
    OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Request();
    OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Request(QString json);
    ~OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiUserlogintypeId() const;
    void setFkiUserlogintypeId(const qint32 &fki_userlogintype_id);
    bool is_fki_userlogintype_id_Set() const;
    bool is_fki_userlogintype_id_Valid() const;

    qint32 getFkiEzsigntsarequirementId() const;
    void setFkiEzsigntsarequirementId(const qint32 &fki_ezsigntsarequirement_id);
    bool is_fki_ezsigntsarequirement_id_Set() const;
    bool is_fki_ezsigntsarequirement_id_Valid() const;

    QString getSEzsignbulksendtransmissionDescription() const;
    void setSEzsignbulksendtransmissionDescription(const QString &s_ezsignbulksendtransmission_description);
    bool is_s_ezsignbulksendtransmission_description_Set() const;
    bool is_s_ezsignbulksendtransmission_description_Valid() const;

    QString getDtEzsigndocumentDuedate() const;
    void setDtEzsigndocumentDuedate(const QString &dt_ezsigndocument_duedate);
    bool is_dt_ezsigndocument_duedate_Set() const;
    bool is_dt_ezsigndocument_duedate_Valid() const;

    OAIField_eEzsignfolderSendreminderfrequency getEEzsignfolderSendreminderfrequency() const;
    void setEEzsignfolderSendreminderfrequency(const OAIField_eEzsignfolderSendreminderfrequency &e_ezsignfolder_sendreminderfrequency);
    bool is_e_ezsignfolder_sendreminderfrequency_Set() const;
    bool is_e_ezsignfolder_sendreminderfrequency_Valid() const;

    QString getTExtraMessage() const;
    void setTExtraMessage(const QString &t_extra_message);
    bool is_t_extra_message_Set() const;
    bool is_t_extra_message_Valid() const;

    QByteArray getSCsvBase64() const;
    void setSCsvBase64(const QByteArray &s_csv_base64);
    bool is_s_csv_base64_Set() const;
    bool is_s_csv_base64_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_userlogintype_id;
    bool m_fki_userlogintype_id_isSet;
    bool m_fki_userlogintype_id_isValid;

    qint32 fki_ezsigntsarequirement_id;
    bool m_fki_ezsigntsarequirement_id_isSet;
    bool m_fki_ezsigntsarequirement_id_isValid;

    QString s_ezsignbulksendtransmission_description;
    bool m_s_ezsignbulksendtransmission_description_isSet;
    bool m_s_ezsignbulksendtransmission_description_isValid;

    QString dt_ezsigndocument_duedate;
    bool m_dt_ezsigndocument_duedate_isSet;
    bool m_dt_ezsigndocument_duedate_isValid;

    OAIField_eEzsignfolderSendreminderfrequency e_ezsignfolder_sendreminderfrequency;
    bool m_e_ezsignfolder_sendreminderfrequency_isSet;
    bool m_e_ezsignfolder_sendreminderfrequency_isValid;

    QString t_extra_message;
    bool m_t_extra_message_isSet;
    bool m_t_extra_message_isValid;

    QByteArray s_csv_base64;
    bool m_s_csv_base64_isSet;
    bool m_s_csv_base64_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Request)

#endif // OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Request_H