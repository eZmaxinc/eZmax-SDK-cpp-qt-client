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
 * User_AutocompleteElement_Response.h
 *
 * A User AutocompleteElement Response
 */

#ifndef User_AutocompleteElement_Response_H
#define User_AutocompleteElement_Response_H

#include <QJsonObject>

#include "Field_eUserType.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class User_AutocompleteElement_Response : public Object {
public:
    User_AutocompleteElement_Response();
    User_AutocompleteElement_Response(QString json);
    ~User_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Field_eUserType getEUserType() const;
    void setEUserType(const Field_eUserType &e_user_type);
    bool is_e_user_type_Set() const;
    bool is_e_user_type_Valid() const;

    QString getSUserName() const;
    void setSUserName(const QString &s_user_name);
    bool is_s_user_name_Set() const;
    bool is_s_user_name_Valid() const;

    qint32 getPkiUserId() const;
    void setPkiUserId(const qint32 &pki_user_id);
    bool is_pki_user_id_Set() const;
    bool is_pki_user_id_Valid() const;

    bool isBUserIsactive() const;
    void setBUserIsactive(const bool &b_user_isactive);
    bool is_b_user_isactive_Set() const;
    bool is_b_user_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Field_eUserType m_e_user_type;
    bool m_e_user_type_isSet;
    bool m_e_user_type_isValid;

    QString m_s_user_name;
    bool m_s_user_name_isSet;
    bool m_s_user_name_isValid;

    qint32 m_pki_user_id;
    bool m_pki_user_id_isSet;
    bool m_pki_user_id_isValid;

    bool m_b_user_isactive;
    bool m_b_user_isactive_isSet;
    bool m_b_user_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::User_AutocompleteElement_Response)

#endif // User_AutocompleteElement_Response_H
