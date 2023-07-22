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
 * OAIUsergroup_AutocompleteElement_Response.h
 *
 * A Usergroup AutocompleteElement Response
 */

#ifndef OAIUsergroup_AutocompleteElement_Response_H
#define OAIUsergroup_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUsergroup_AutocompleteElement_Response : public OAIObject {
public:
    OAIUsergroup_AutocompleteElement_Response();
    OAIUsergroup_AutocompleteElement_Response(QString json);
    ~OAIUsergroup_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSUsergroupNameX() const;
    void setSUsergroupNameX(const QString &s_usergroup_name_x);
    bool is_s_usergroup_name_x_Set() const;
    bool is_s_usergroup_name_x_Valid() const;

    qint32 getPkiUsergroupId() const;
    void setPkiUsergroupId(const qint32 &pki_usergroup_id);
    bool is_pki_usergroup_id_Set() const;
    bool is_pki_usergroup_id_Valid() const;

    bool isBUsergroupIsactive() const;
    void setBUsergroupIsactive(const bool &b_usergroup_isactive);
    bool is_b_usergroup_isactive_Set() const;
    bool is_b_usergroup_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_usergroup_name_x;
    bool m_s_usergroup_name_x_isSet;
    bool m_s_usergroup_name_x_isValid;

    qint32 pki_usergroup_id;
    bool m_pki_usergroup_id_isSet;
    bool m_pki_usergroup_id_isValid;

    bool b_usergroup_isactive;
    bool m_b_usergroup_isactive_isSet;
    bool m_b_usergroup_isactive_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroup_AutocompleteElement_Response)

#endif // OAIUsergroup_AutocompleteElement_Response_H
