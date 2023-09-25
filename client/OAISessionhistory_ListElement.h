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
 * OAISessionhistory_ListElement.h
 *
 * A Sessionhistory List Element
 */

#ifndef OAISessionhistory_ListElement_H
#define OAISessionhistory_ListElement_H

#include <QJsonObject>

#include "OAIField_eSessionhistoryEndby.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAISessionhistory_ListElement : public OAIObject {
public:
    OAISessionhistory_ListElement();
    OAISessionhistory_ListElement(QString json);
    ~OAISessionhistory_ListElement() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiSessionhistoryId() const;
    void setPkiSessionhistoryId(const qint32 &pki_sessionhistory_id);
    bool is_pki_sessionhistory_id_Set() const;
    bool is_pki_sessionhistory_id_Valid() const;

    qint32 getFkiComputerId() const;
    void setFkiComputerId(const qint32 &fki_computer_id);
    bool is_fki_computer_id_Set() const;
    bool is_fki_computer_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    QString getDtSessionhistoryFirsthit() const;
    void setDtSessionhistoryFirsthit(const QString &dt_sessionhistory_firsthit);
    bool is_dt_sessionhistory_firsthit_Set() const;
    bool is_dt_sessionhistory_firsthit_Valid() const;

    QString getDtSessionhistoryLasthit() const;
    void setDtSessionhistoryLasthit(const QString &dt_sessionhistory_lasthit);
    bool is_dt_sessionhistory_lasthit_Set() const;
    bool is_dt_sessionhistory_lasthit_Valid() const;

    OAIField_eSessionhistoryEndby getESessionhistoryEndby() const;
    void setESessionhistoryEndby(const OAIField_eSessionhistoryEndby &e_sessionhistory_endby);
    bool is_e_sessionhistory_endby_Set() const;
    bool is_e_sessionhistory_endby_Valid() const;

    QString getSComputerDescription() const;
    void setSComputerDescription(const QString &s_computer_description);
    bool is_s_computer_description_Set() const;
    bool is_s_computer_description_Valid() const;

    QString getSSessionhistoryDuration() const;
    void setSSessionhistoryDuration(const QString &s_sessionhistory_duration);
    bool is_s_sessionhistory_duration_Set() const;
    bool is_s_sessionhistory_duration_Valid() const;

    QString getSSessionhistoryIp() const;
    void setSSessionhistoryIp(const QString &s_sessionhistory_ip);
    bool is_s_sessionhistory_ip_Set() const;
    bool is_s_sessionhistory_ip_Valid() const;

    QString getSUserLoginname() const;
    void setSUserLoginname(const QString &s_user_loginname);
    bool is_s_user_loginname_Set() const;
    bool is_s_user_loginname_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_sessionhistory_id;
    bool m_pki_sessionhistory_id_isSet;
    bool m_pki_sessionhistory_id_isValid;

    qint32 m_fki_computer_id;
    bool m_fki_computer_id_isSet;
    bool m_fki_computer_id_isValid;

    qint32 m_fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    QString m_dt_sessionhistory_firsthit;
    bool m_dt_sessionhistory_firsthit_isSet;
    bool m_dt_sessionhistory_firsthit_isValid;

    QString m_dt_sessionhistory_lasthit;
    bool m_dt_sessionhistory_lasthit_isSet;
    bool m_dt_sessionhistory_lasthit_isValid;

    OAIField_eSessionhistoryEndby m_e_sessionhistory_endby;
    bool m_e_sessionhistory_endby_isSet;
    bool m_e_sessionhistory_endby_isValid;

    QString m_s_computer_description;
    bool m_s_computer_description_isSet;
    bool m_s_computer_description_isValid;

    QString m_s_sessionhistory_duration;
    bool m_s_sessionhistory_duration_isSet;
    bool m_s_sessionhistory_duration_isValid;

    QString m_s_sessionhistory_ip;
    bool m_s_sessionhistory_ip_isSet;
    bool m_s_sessionhistory_ip_isValid;

    QString m_s_user_loginname;
    bool m_s_user_loginname_isSet;
    bool m_s_user_loginname_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAISessionhistory_ListElement)

#endif // OAISessionhistory_ListElement_H
