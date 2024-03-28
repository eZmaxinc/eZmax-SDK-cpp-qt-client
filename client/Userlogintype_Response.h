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
 * Userlogintype_Response.h
 *
 * An Userlogintype Object
 */

#ifndef Userlogintype_Response_H
#define Userlogintype_Response_H

#include <QJsonObject>

#include "Multilingual_UserlogintypeDescription.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Multilingual_UserlogintypeDescription;

class Userlogintype_Response : public Object {
public:
    Userlogintype_Response();
    Userlogintype_Response(QString json);
    ~Userlogintype_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUserlogintypeId() const;
    void setPkiUserlogintypeId(const qint32 &pki_userlogintype_id);
    bool is_pki_userlogintype_id_Set() const;
    bool is_pki_userlogintype_id_Valid() const;

    Multilingual_UserlogintypeDescription getObjUserlogintypeDescription() const;
    void setObjUserlogintypeDescription(const Multilingual_UserlogintypeDescription &obj_userlogintype_description);
    bool is_obj_userlogintype_description_Set() const;
    bool is_obj_userlogintype_description_Valid() const;

    QString getSUserlogintypeDescriptionX() const;
    void setSUserlogintypeDescriptionX(const QString &s_userlogintype_description_x);
    bool is_s_userlogintype_description_x_Set() const;
    bool is_s_userlogintype_description_x_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_userlogintype_id;
    bool m_pki_userlogintype_id_isSet;
    bool m_pki_userlogintype_id_isValid;

    Multilingual_UserlogintypeDescription m_obj_userlogintype_description;
    bool m_obj_userlogintype_description_isSet;
    bool m_obj_userlogintype_description_isValid;

    QString m_s_userlogintype_description_x;
    bool m_s_userlogintype_description_x_isSet;
    bool m_s_userlogintype_description_x_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Userlogintype_Response)

#endif // Userlogintype_Response_H
