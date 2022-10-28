/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustom_Notificationsubsectiongetnotificationtests_Response_allOf.h
 *
 * 
 */

#ifndef OAICustom_Notificationsubsectiongetnotificationtests_Response_allOf_H
#define OAICustom_Notificationsubsectiongetnotificationtests_Response_allOf_H

#include <QJsonObject>

#include "OAICustom_Notificationtestgetnotificationtests_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_Notificationtestgetnotificationtests_Response;

class OAICustom_Notificationsubsectiongetnotificationtests_Response_allOf : public OAIObject {
public:
    OAICustom_Notificationsubsectiongetnotificationtests_Response_allOf();
    OAICustom_Notificationsubsectiongetnotificationtests_Response_allOf(QString json);
    ~OAICustom_Notificationsubsectiongetnotificationtests_Response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICustom_Notificationtestgetnotificationtests_Response> getAObjNotificationtest() const;
    void setAObjNotificationtest(const QList<OAICustom_Notificationtestgetnotificationtests_Response> &a_obj_notificationtest);
    bool is_a_obj_notificationtest_Set() const;
    bool is_a_obj_notificationtest_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICustom_Notificationtestgetnotificationtests_Response> a_obj_notificationtest;
    bool m_a_obj_notificationtest_isSet;
    bool m_a_obj_notificationtest_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_Notificationsubsectiongetnotificationtests_Response_allOf)

#endif // OAICustom_Notificationsubsectiongetnotificationtests_Response_allOf_H
