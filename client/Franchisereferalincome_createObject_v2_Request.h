/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Franchisereferalincome_createObject_v2_Request.h
 *
 * Request for POST /2/object/franchisereferalincome
 */

#ifndef Franchisereferalincome_createObject_v2_Request_H
#define Franchisereferalincome_createObject_v2_Request_H

#include <QJsonObject>

#include "Franchisereferalincome_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Franchisereferalincome_RequestCompound;

class Franchisereferalincome_createObject_v2_Request : public Object {
public:
    Franchisereferalincome_createObject_v2_Request();
    Franchisereferalincome_createObject_v2_Request(QString json);
    ~Franchisereferalincome_createObject_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Franchisereferalincome_RequestCompound> getAObjFranchisereferalincome() const;
    void setAObjFranchisereferalincome(const QList<Franchisereferalincome_RequestCompound> &a_obj_franchisereferalincome);
    bool is_a_obj_franchisereferalincome_Set() const;
    bool is_a_obj_franchisereferalincome_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Franchisereferalincome_RequestCompound> m_a_obj_franchisereferalincome;
    bool m_a_obj_franchisereferalincome_isSet;
    bool m_a_obj_franchisereferalincome_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Franchisereferalincome_createObject_v2_Request)

#endif // Franchisereferalincome_createObject_v2_Request_H
