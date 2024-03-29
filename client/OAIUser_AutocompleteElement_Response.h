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
 * OAIUser_AutocompleteElement_Response.h
 *
 * A User AutocompleteElement Response
 */

#ifndef OAIUser_AutocompleteElement_Response_H
#define OAIUser_AutocompleteElement_Response_H

#include <QJsonObject>

#include "OAIField_eUserType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUser_AutocompleteElement_Response : public OAIObject {
public:
    OAIUser_AutocompleteElement_Response();
    OAIUser_AutocompleteElement_Response(QString json);
    ~OAIUser_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIField_eUserType getEUserType() const;
    void setEUserType(const OAIField_eUserType &e_user_type);
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

    OAIField_eUserType e_user_type;
    bool m_e_user_type_isSet;
    bool m_e_user_type_isValid;

    QString s_user_name;
    bool m_s_user_name_isSet;
    bool m_s_user_name_isValid;

    qint32 pki_user_id;
    bool m_pki_user_id_isSet;
    bool m_pki_user_id_isValid;

    bool b_user_isactive;
    bool m_b_user_isactive_isSet;
    bool m_b_user_isactive_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUser_AutocompleteElement_Response)

#endif // OAIUser_AutocompleteElement_Response_H
