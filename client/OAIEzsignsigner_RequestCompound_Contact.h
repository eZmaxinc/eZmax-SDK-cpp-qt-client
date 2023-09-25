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
 * OAIEzsignsigner_RequestCompound_Contact.h
 *
 * A Ezsignsigner-&gt;Contact Object and children to create a complete structure
 */

#ifndef OAIEzsignsigner_RequestCompound_Contact_H
#define OAIEzsignsigner_RequestCompound_Contact_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIEzsignsigner_RequestCompound_Contact : public OAIObject {
public:
    OAIEzsignsigner_RequestCompound_Contact();
    OAIEzsignsigner_RequestCompound_Contact(QString json);
    ~OAIEzsignsigner_RequestCompound_Contact() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSContactFirstname() const;
    void setSContactFirstname(const QString &s_contact_firstname);
    bool is_s_contact_firstname_Set() const;
    bool is_s_contact_firstname_Valid() const;

    QString getSContactLastname() const;
    void setSContactLastname(const QString &s_contact_lastname);
    bool is_s_contact_lastname_Set() const;
    bool is_s_contact_lastname_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    QString getSEmailAddress() const;
    void setSEmailAddress(const QString &s_email_address);
    bool is_s_email_address_Set() const;
    bool is_s_email_address_Valid() const;

    QString getSPhoneE164() const;
    void setSPhoneE164(const QString &s_phone_e164);
    bool is_s_phone_e164_Set() const;
    bool is_s_phone_e164_Valid() const;

    QString getSPhoneExtension() const;
    void setSPhoneExtension(const QString &s_phone_extension);
    bool is_s_phone_extension_Set() const;
    bool is_s_phone_extension_Valid() const;

    QString getSPhoneE164Cell() const;
    void setSPhoneE164Cell(const QString &s_phone_e164_cell);
    bool is_s_phone_e164_cell_Set() const;
    bool is_s_phone_e164_cell_Valid() const;

    Q_DECL_DEPRECATED QString getSPhoneNumber() const;
    Q_DECL_DEPRECATED void setSPhoneNumber(const QString &s_phone_number);
    Q_DECL_DEPRECATED bool is_s_phone_number_Set() const;
    Q_DECL_DEPRECATED bool is_s_phone_number_Valid() const;

    Q_DECL_DEPRECATED QString getSPhoneNumberCell() const;
    Q_DECL_DEPRECATED void setSPhoneNumberCell(const QString &s_phone_number_cell);
    Q_DECL_DEPRECATED bool is_s_phone_number_cell_Set() const;
    Q_DECL_DEPRECATED bool is_s_phone_number_cell_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_contact_firstname;
    bool m_s_contact_firstname_isSet;
    bool m_s_contact_firstname_isValid;

    QString m_s_contact_lastname;
    bool m_s_contact_lastname_isSet;
    bool m_s_contact_lastname_isValid;

    qint32 m_fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString m_s_email_address;
    bool m_s_email_address_isSet;
    bool m_s_email_address_isValid;

    QString m_s_phone_e164;
    bool m_s_phone_e164_isSet;
    bool m_s_phone_e164_isValid;

    QString m_s_phone_extension;
    bool m_s_phone_extension_isSet;
    bool m_s_phone_extension_isValid;

    QString m_s_phone_e164_cell;
    bool m_s_phone_e164_cell_isSet;
    bool m_s_phone_e164_cell_isValid;

    QString m_s_phone_number;
    bool m_s_phone_number_isSet;
    bool m_s_phone_number_isValid;

    QString m_s_phone_number_cell;
    bool m_s_phone_number_cell_isSet;
    bool m_s_phone_number_cell_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsignsigner_RequestCompound_Contact)

#endif // OAIEzsignsigner_RequestCompound_Contact_H
