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
 * Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request.h
 *
 * Request for PUT /1/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID}/editEzsigntemplatepackagesigners
 */

#ifndef Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request_H
#define Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request_H

#include <QJsonObject>

#include "Ezsigntemplatepackagesigner_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatepackagesigner_RequestCompound;

class Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request : public Object {
public:
    Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request();
    Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request(QString json);
    ~Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigntemplatepackagesigner_RequestCompound> getAObjEzsigntemplatepackagesigner() const;
    void setAObjEzsigntemplatepackagesigner(const QList<Ezsigntemplatepackagesigner_RequestCompound> &a_obj_ezsigntemplatepackagesigner);
    bool is_a_obj_ezsigntemplatepackagesigner_Set() const;
    bool is_a_obj_ezsigntemplatepackagesigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigntemplatepackagesigner_RequestCompound> m_a_obj_ezsigntemplatepackagesigner;
    bool m_a_obj_ezsigntemplatepackagesigner_isSet;
    bool m_a_obj_ezsigntemplatepackagesigner_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request)

#endif // Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request_H
